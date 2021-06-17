import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class MyDriver {
	public static void main(String[] args) throws IOException, ClassNotFoundException, InterruptedException {

		Configuration conf = new Configuration();
		Job m = new Job(conf, "Prime Sum");
		m.setJarByClass(MyDriver.class);
		m.setMapperClass(MyMapper.class);
		m.setReducerClass(MyReducer.class);
		m.setMapOutputKeyClass(Text.class);
		m.setMapOutputValueClass(IntWritable.class);

		FileInputFormat.addInputPath(m, new Path(args[0]));
		FileOutputFormat.setOutputPath(m, new Path(args[1]));

		System.exit(j.waitForCompletion(true) ? 0 : 1);
	}
}
