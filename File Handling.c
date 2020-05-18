ALGORITHM 1
STEP 1 : Start.
STEP 2 : Take s=0 & even,odd,prime,main as file pointers.
STEP 3 : Open data.txt file in write mode using  fopen() function and assign it to main.
STEP 4 : Take n as number of inputs.
STEP 5 : i=0.
STEP 6 : If i<n go to STEP 7 otherwise go to STEP 10.
STEP 7 : Input a.
STEP 8 : Use putw(a,main)funtion.
STEP 9 : i=i+1 and go to STEP 6.
STEP 10: Close main using fclose() function.
STEP 11: Open data.txt file in read mode using  fopen() function and assign it to main.
STEP 12: Open odd.txt file in write mode using fopen() function and assign it to odd.
STEP 13: Open even.txt file in write mode using fopen() function and assign it to even.
STEP 14: Open prime.txt file in write mode using fopen() function and assign it to prime.
STEP 15: If any of the main,even,odd or prime is NULL then print error message and go to stop.
STEP 16: if a=getw(main)!=EOF go to STEP 17 otherwise STEP 25.
STEP 17: if a%2=0 , then putw(a,even).
STEP 18: if a%2!=0 ,then putw(a,odd).
STEP 19: if a%2!=0 or a==2 , to sto STEP 20.
STEP 20: if a>1 then assign i=2.
STEP 21: if i<a then to to STEP 22 otherwise STEP 23
STEP 22: if a%i=0 then s=1 and use break and to STEP 21.
STEP 23: if !s ,then putw(a,prime).
STEP 24: s=0 and go to STEP 16.
STEP 25: Close main,even,odd,prime using fclose() function.
STEP 26: Open data.txt file in read mode using fopen() function and assign it to main.
STEP 27: Open odd.txt file in read mode using fopen() function and assign it to odd.
STEP 28: Open even.txt file in read mode using fopen() function and assign it to even.
STEP 29: Open prime.txt file in read mode using fopen() function and assign it to prime.
STEP 30: Print content of main file by while((a=getw(main))!=EOF) and print a.
STEP 31: Print content of odd  file by while((a=getw(odd))!=EOF) and print a.
STEP 32: Print content of even  file by while((a=getw(even))!=EOF)  and print a.
STEP 33: Print content of prime file by while((a=getw(prime))!=EOF)  and print a.
STEP 34: Close main,even,odd,prime using fclose() function.
STEP 35: Stop.










CODE 1
/*Q1.
C program to input 10 integers in a file.Copy even,odd and prime numbers into seperate files
also display contents of all four files.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,n,i,s=0;
 FILE *even,*odd,*prime,*main;
 main=fopen("DATA.txt","w");
 printf("How many numbers : ");
 scanf("%d",&n);
 printf("Enter contents of DATA file : \n");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a);
   putw(a,main);
  }

 fclose(main);
 main=fopen("DATA.txt","r");
 odd=fopen("odd.txt","w");
 even=fopen("even.txt","w");
 prime=fopen("prime.txt","w");
 if(main==NULL||even==NULL||odd==NULL||prime==NULL)
 {
 printf("File could not open");
 exit(0);
 }

 while((a=getw(main))!=EOF)
 { 
  if(a%2==0)
      putw(a,even);
  if(a%2!=0)
      putw (a,odd); 
  if(a%2!=0 || a==2)
   {
      if(a>1)
       {
         for(i=2; i<a; i++ )
             {
               if(a%i==0)
                  {
                     s=1;
                     break;
                  }
             }
         if(!s)
            putw(a,prime);
       }       
         s=0;
   }
 }
 fclose(main);
 fclose(even);
 fclose(odd);
 fclose(prime);

 main=fopen("DATA.txt","r");
 odd=fopen("odd.txt","r");
 even=fopen("even.txt","r");
 prime=fopen("prime.txt","r");

 printf("\nContents of MAIN file:");
 while((a=getw(main))!=EOF)
 printf("%d ",a); 

 printf("\nContents of ODD file:");
 while((a=getw(odd))!=EOF)
 printf("%d ",a);

 printf("\nContents of EVEN file:");
 while((a=getw(even))!=EOF)
 printf("%d ",a);
 printf("\nContents of PRIME file:");
 while((a=getw(prime))!=EOF)
 printf("%d ",a);
 fclose(main);
 fclose(even);
 fclose(odd);
 fclose(prime);
}















ALGORITHM 2
STEP 1 : Start.
STEP 2 : Take count=0 & fptr as file pointers.
STEP 3 : Open introduction.txt file in write mode using fopen() function and assign it to fptr.
STEP 4 : Take a paragraph as inputs using fgets(intro, 100, stdin).
STEP 5 : Use putw(intro,fptr)funtion.
STEP 6 : Close fptr using fclose() function.
STEP 7 : Open introduction.txt file in read mode using fopen() function and assign it to fptr.
STEP 8 : If fptr is NULL then print error message and go to stop.
STEP 9 : Take line=0,chr=0,space=0,conso=0,vowel=0.
STEP 10: Take c=fgetc(fptr).
STEP 11: if c!=EOF go to STEP 12 otherwise STEP 18.
STEP 12: chr=chr+1..
STEP 13: if c='\n' , then line=line+1.
STEP 14: if c=' ' , then space=scape+1.
STEP 15: if c is a,e,i,o,u or A,E,I,O,U , then vowel=vowel+1.
STEP 16: if c>='a' and c<='z' OR c>='A' and c<='Z' , then conso=conso+1.
STEP 17: Take c=fgetc(fptr) and go to STEP 11.
STEP 18: Close fptr using fclose() function.
STEP 19: Open introduction.txt file in read mode using fopen() function and assign it to fptr.
STEP 20: Print "data :" and take ch=fgetc(fptr).
STEP 21: Print content of introduction.txt file by while ch!=EOF  and print ch then take ch=fgetc(fptr).
STEP 22: Close fptr using fclose() function.
STEP 23: Print chr,vowel,conso,line,space.
STEP 24: Stop.
CODE 2
/*Q2.
C program to write your introduction in a file,display its contents and
count number of characters,spaces,newline,consonants and vowels.
*/
#include <stdio.h> 
int main() 
{ 
      FILE *fPtr;
      char intro[100];
      int count=0;
      fPtr = fopen("introduction.txt", "w");    
      printf("\nEnter introduction :");
      fflush(stdin);          // To clear extra characters in queue
      fgets(intro, 100, stdin);
      fputs(intro, fPtr);
	fclose(fPtr);   
	char c,ch; 
	fPtr = fopen("introduction.txt", "r"); 
      if (fPtr == NULL) 
	{ 
		printf("Could not open file introduction.txt"); 
		return 0; 
	} 
      int line=0,chr=0,space=0,conso=0,vowel=0;
	for (c = fgetc(fPtr); c != EOF; c = fgetc(fPtr)) 
	{	
            chr++;
            if (c == '\n') 
		line++;
            if(c==' ')
            space++; 
            if (c == 'a' || c == 'e' || c == 'i' ||c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowel++;
            else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            conso++;
      }
	fclose(fPtr); 

      fPtr = fopen("introduction.txt", "r");
	printf("The file introduction.txt has ");
      printf("\nData: ") ;
      ch = fgetc(fPtr); 
      while (ch != EOF) 
      { 
        printf ("%c", ch); 
        ch = fgetc(fPtr); 
      } 
  
      fclose(fPtr);
      printf("Characters: %d",chr);
      printf("\nVowels: %d",vowel);
      printf("\nConsonants: %d",conso);
      printf("\nLines: %d",line);
      printf("\nSpaces: %d", space);      
      return 0; 
}


















ALGORITHM 3
STEP 1 : Start.
STEP 2 : Take fptr as file pointers.
STEP 3 : Input filename and assign it to file.
STEP 4 : Open file in append mode using fopen() function and assign it to fptr.
STEP 5 : If fptr is NULL then print error message and go to stop.
STEP 6 : Take data to append as inputs using fgets(append, 100, stdin).
STEP 7 : Use fputs(append,fptr)funtion.
STEP 8 : Close fptr using fclose() function.
STEP 9 : Open file in read mode using fopen() function and assign it to fptr.
STEP 10: Take ch=fgetc(fptr).
STEP 11: Print content file by while ch!=EOF  and print ch then take ch=fgetc(fptr).
STEP 12: Close fptr using fclose() function.
STEP 13: Stop.











CODE 3
/*Q3.
C program to append data into a file.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char file[100],append[100],ch;
    printf("Enter file name :");
    scanf("%s", file);
    fptr = fopen(file, "a");
    if (fptr == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(0);
    }
    printf("Enter data to append :");
    fflush(stdin);          // To clear extra white space characters in stdin
    fgets(append, 100, stdin);
    fputs(append, fptr);
    fclose(fptr);
    fptr = fopen(file, "r");
   printf("\nChanged file contents :\n");
    ch = fgetc(fptr);
    while (ch != EOF)
    { 
        printf("%c", ch); 
        ch = fgetc(fptr); 
    }
    fclose(fptr);
    return 0;
}















ALGORITHM 4
STEP 1 : Start.
STEP 2 : Take diff=0 and fptr1 ,fptr2 as file pointers.
STEP 3 : Input first filename and assign it to path1.
STEP 4 : Input second filename and assign it to path2.
STEP 5 : Open path1 file in read mode using fopen() function and assign it to fptr1.
STEP 6 : Open path2 file in read mode using fopen() function and assign it to fptr2.
STEP 7 : If fptr1 or fptr2 is NULL then print error message and go to stop.
STEP 8 : Start do while loop by do{.
STEP 9 : Take ch1=fgetc(fptr1) and ch2=fgetc(fptr2).
STEP 10: if ch!=ch2 then go to STEP 11.
STEP 11: diff=diff+1 and break then go to STEP 12.
STEP 12: while(ch1!=EOF and ch2!=EOF).
STEP 13: if diff=0 then print "Both files are equal" otherwise fo to STEP 14.
STEP 14: print "Files are not Equal.".
STEP 15: Close fptr1 and fptr2 using fclose() function.
STEP 16: Stop.








CODE 4
/*Q4.
C program to compare two file.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE * fPtr1,* fPtr2;
    char path1[100],path2[100];
    int diff=0;
    printf("Enter name of first file: ");
    scanf("%s", path1);
    printf("Enter name of second file: ");
    scanf("%s", path2);
    fPtr1 = fopen(path1, "r");
    fPtr2 = fopen(path2, "r");
    if (fPtr1 == NULL || fPtr2 == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }
    char ch1, ch2;
    do
    {   
        ch1 = fgetc(fPtr1);
        ch2 = fgetc(fPtr2);
        if (ch1 != ch2)
        {
            diff++;
            break;
        }
    } while (ch1 != EOF && ch2 != EOF);
    if (diff == 0)
        printf("\nBoth files are equal.");
    else 
        printf("\nFiles are not equal.\n");
    fclose(fPtr1);
    fclose(fPtr2);
    return 0;
}








ALGORITHM 5
STEP 1 : Start.
STEP 2 : Take fa ,fb and fc as file pointers.
STEP 3 : Input first filename and assign it to file1.
STEP 4 : Input second filename and assign it to file2.
STEP 5 : Open merged.txt file in write mode using fopen() function and assign it to fc.
STEP 6 : Open file1 file in read mode using fopen() function and assign it to fa.
STEP 7 : Open file2 file in read mode using fopen() function and assign it to fb.
STEP 8 : If fa or fb is NULL then print error message and go to stop.
STEP 9 : while (ch=fgetc(fa))!=EOF then go to STEP 10.
STEP 10: Use fputc(ch,fc)funtion.
STEP 11: print " ".
STEP 12: while (ch=fgetc(fb))!=EOF then go to STEP 13.
STEP 13: Use fputc(ch,fc)funtion.
STEP 14: Close fa, fb, fc using fclose() function.
STEP 15: Open merged.txt file in read mode using fopen() function and assign it to fc.
STEP 16: while (ch=fgetc(fc))!=EOF then go to STEP 17 otherwise STEP 18.
STEP 17: print ch and go to STEP 16.
STEP 18: Close fc using fclose() function.
STEP 19: Stop.





CODE 5
/*Q5.
C program to merge content of two files into a third file.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fa, *fb, *fc;
  char ch, file1[20], file2[20], file3[20];
  printf("Enter name of first file :");
  gets(file1);
  printf("Enter name of second file :");
  gets(file2);
  fc = fopen("merged.txt", "w");

  fa = fopen(file1, "r");
  fb = fopen(file2, "r");
  if (fa == NULL || fb == NULL)
  {
    printf("Unable to open file\n");
    exit(1);
  }
  while ((ch = fgetc(fa)) != EOF)
    fputc(ch,fc);
  fprintf(fc," ");
  while ((ch = fgetc(fb)) != EOF)
    fputc(ch,fc);
  fclose(fa);
  fclose(fb);
  fclose(fc);
  printf("The two files were merged into merged.txt file :\n");
  fc=fopen("merged.txt","r");
  while ((ch = fgetc(fc)) != EOF)
  printf("%c",ch);
  fclose(fc);
  return 0;
}












ALGORITHM 6
STEP 1 : Start.
STEP 2 : Take fptr as file pointers.
STEP 3 : Open student.txt file in write mode using fopen() function and assign it to fptr.
STEP 4 : If fptr is NULL then print error message and go to stop.
STEP 5 : Input deatils of the student.
STEP 6 : Input Name= s.name, Age= s.age, Roll no.= s.roll, Percentage= s.per.
STEP 7 : Use fwrite() function as fwrite (&s, sizeof(struct student), 1, fptr).
STEP 8 : if fwrite!=0 ,then go to STEP 9 otherwise STEP 10.
STEP 9 : print "Student recorded sucessfully", go to STEP 11.
STEP 10: print "Error writing record", go to STEP 11.
STEP 11: Close fptr using fclose() function.
STEP 12: Stop.












CODE 6
/*Q6.
C program to write students records ( name, age, roll no. ,percentage) in
a text file using structures.
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
struct student 
{ 
    char name[20]; 
    int age,roll,per;
}; 

int main () 
{ 
	FILE *fptr; 
	fptr = fopen ("student.txt", "w"); 
	if (fptr == NULL) 
	{ 
		printf("\nUnable to open file"); 
		exit (1); 
	} 
    struct student s;
    printf("Enter Student details as follow :");
    printf("\nEnter name :");
    gets(s.name);
    printf("Enter age :");
    scanf("%d",&s.age);
    printf("Enter roll number :");
    scanf("%d",&s.roll);
    printf("Enter percentage :");
    scanf("%d",&s.per); 
	fwrite (&s, sizeof(struct student), 1, fptr); 
	if(fwrite != 0) 
		printf("Student is recorded successfully !\n"); 
	else
		printf("Error writing record\n"); 
	fclose (fptr); 
    return 0; 
}









ALGORITHM 7
STEP 1 : Start.
STEP 2 : Take fptr as file pointers.
STEP 3 : Open student.txt file in read mode using fopen() function and assign it to fptr.
STEP 4 : If fptr is NULL then print error message and go to stop.
STEP 5 : while fread(&s, sizeof(struct student), 1, fptr) using fread() function.
STEP 6 : Deatils of the student.
STEP 7 : Name= s.name, Age= s.age, Roll no.= s.roll, Percentage= s.per.
STEP 8 : Close fptr using fclose() function.
STEP 9 : Stop.















CODE 7
/*Q7.
C program to read students record ( name, age, roll no. ,percentage) in
a text file using structures.
*/
#include <stdio.h> 
#include <stdlib.h>  
struct student { 
      char name[20]; 
      int age,roll,per;
}; 
int main () 
{ 
	FILE *fptr; 
	struct student s; 
               fptr = fopen ("student.txt", "r"); 
	if (fptr == NULL) 
	{           printf("\nError opening file\n"); 
		exit (1); 
	} 
	 while(fread(&s, sizeof(struct student), 1, fptr)) 
	printf ("Details : \nName = %s\nAge = %d\nRoll no. = %d\nPercentage = %d\n", s.name, s.age, s.roll, s.per); 
	fclose (fptr); 
      return 0; 
}
ALGORITHM 8
STEP 1 : Start.
STEP 2 : Take fptr as file pointers.
STEP 3 : Open student.dat file in write mode using fopen() function and assign it to fptr.
STEP 4 : If fptr is NULL then print error message and go to stop.
STEP 5 : Input deatils of the student.
STEP 6 : Input Name= s.name, Age= s.age, Roll no.= s.roll, Percentage= s.per.
STEP 7 : Use fwrite() function as fwrite (&s, sizeof(struct student), 1, fptr).
STEP 8 : if fwrite!=0 ,then go to STEP 9 otherwise STEP 10.
STEP 9 : print "Student recorded sucessfully", go to STEP 11.
STEP 10: print "Error writing record", go to STEP 11.
STEP 11: Close fptr using fclose() function.
STEP 12: Stop.












CODE 8
/*Q8.
C program to write students records ( name, age, roll no. ,percentage) in
a binary file using structures.
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
struct student 
{ 
    char name[20]; 
    int age,roll,per;
}; 

int main () 
{ 
	FILE *fptr; 
	fptr = fopen ("student.dat", "w"); 
	if (fptr == NULL) 
	{ 
		printf("\nUnable to open file"); 
		exit (1); 
	} 
    struct student s;
    printf("Enter Student details as follow :");
    printf("\nEnter name :");
    gets(s.name);
    printf("Enter age :");
    scanf("%d",&s.age);
    printf("Enter roll number :");
    scanf("%d",&s.roll);
    printf("Enter percentage :");
    scanf("%d",&s.per); 
	fwrite (&s, sizeof(struct student), 1, fptr); 
	if(fwrite != 0) 
		printf("Student is recorded successfully !\n"); 
	else
		printf("Error writing record\n"); 
	fclose (fptr); 
    return 0; 
}









ALGORITHM 9
STEP 1 : Start.
STEP 2 : Take fptr as file pointers.
STEP 3 : Open student.txt file in read mode using fopen() function and assign it to fptr.
STEP 4 : If fptr is NULL then print error message and go to stop.
STEP 5 : while fread(&s, sizeof(struct student), 1, fptr) using fread() function.
STEP 6 : Deatils of the student.
STEP 7 : Name= s.name, Age= s.age, Roll no.= s.roll, Percentage= s.per.
STEP 8 : Close fptr using fclose() function.
STEP 9 : Stop.















CODE 9
/*Q9.
C program to read students record ( name, age, roll no. ,percentage) in
a binary file using structures.
*/
#include <stdio.h> 
#include <stdlib.h>  
struct student 
{ 
      char name[20]; 
      int age,roll,per;
}; 
int main () { 
	FILE *fptr; 
	struct student s; 
               fptr = fopen ("student.dat", "r"); 
	if (fptr == NULL) 
	{            printf("\nError opening file\n"); 
		exit (1); 
	} 
	 while(fread(&s, sizeof(struct student), 1, fptr)) 
	printf ("Details : \nName = %s\nAge = %d\nRoll no. = %d\nPercentage = %d\n", s.name, s.age, s.roll, s.per); 
	fclose (fptr); 
      return 0; 
}
