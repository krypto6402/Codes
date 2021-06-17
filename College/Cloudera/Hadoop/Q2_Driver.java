import java.io.IOException;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class WordDriver {
	public static void main(String[] args) throws IOException, ClassNotFoundException, InterruptedException {

		Job m = new Job();
		m.setJobName("My First Job");
		m.setJarByClass(WordCountDriver.class);
		m.setMapperClass(WordCountMapper.class);
		m.setReducerClass(WordCountReducer.class);
		m.setOutputKeyClass(Text.class);
		m.setOutputValueClass(IntWritable.class);

		FileInputFormat.addInputPath(m, new Path(args[0]));
		FileOutputFormat.setOutputPath(m, new Path(args[1]));

		System.exit(job.waitForCompletion(true) ? 0 : 1);
	}

}