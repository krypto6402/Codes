import java.io.IOException;
import org.apache.hadoop.io.DoubleWritable;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Mapper.Context;

public class MyMapper extends Mapper<LongWritable, Text, Text, IntWritable> {

	public void map(LongWritable key, Text value, Context context) throws java.io.IOException, InterruptedException {
		String data[] = value.toString().split(",");
		for (String num : data) {
			int number = Integer.parseInt(num);
			boolean flag = true;
			for(int i=2;i<=Math.sqrt(number);i++){
				if(number % i == 0){ 
					flag = false;
					break;
				}
			}
			if (flag) {
				context.write(new Text("Prime Sum"), new IntWritable(number));
			}
		}
	}
}
