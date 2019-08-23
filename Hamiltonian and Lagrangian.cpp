/*Students have become secret admirers of SEGP. They find the course exciting and the
professors amusing. After a superb Mid Semester examination, it’s now time for the
results. The TAs have released the marks of students in the form of an array, where arr[i]
represents the marks of the ith student.
Since you are a curious kid, you want to find all the marks that are not smaller than those
on its right side in the array.
Input Format
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.
Output Format
Output all the integers separated in the array from left to right that are not smaller than
those on its right side.
*/


import java.io.*;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		int n,a[];
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		a = new int[n];
		for(int i=0;i<n;i++)
			a[i] = sc.nextInt();
		int i;
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
				System.out.print(a[i+1]+" ");
		}
		System.out.print(a[i]);
		sc.close();
	}

}