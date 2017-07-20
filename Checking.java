import java.util.*;
import java.io.*;
import java.net.*;
class Checking
{
public static void main(String args[])
{
int a;
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number");
a=sc.nextInt();
if(a>0)
System.out.println("It is Positive");
else if(a<0)
System.out.println("It is Negative");
else
System.out.println("It is Zero");
}}
