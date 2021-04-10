//importing exceptions
import java.io.IOException;

//importing box classes
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;

//importing reducer class
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.Reducer.Context;

public class GourangReducer extends Reducer<Text, IntWritable, Text, IntWritable> {

	public void reduce(Text key, Iterable<IntWritable> values, Context context)
			throws IOException, InterruptedException {
		int count = 0;
		for (IntWritable x : values) {
			count += 1;
		}
		context.write(key, new IntWritable(count));
	}
}
