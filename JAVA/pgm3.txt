package me;

class Abc{
	int add(int num1,int num2) {
		
		return num1+num2;
	}
	double add(double num1,double num2) {
		
		return num1+num2;
	}
	int add(int num1,int num2,int num3) {
		
		return num1+num2+num3;
	}
}
public class pgm3 {

	public static void main(String[] args) {
		Abc a=new Abc();
		System.out.println("Sum1"+a.add(1,2));
		System.out.println("Sum2"+a.add(1,2,3));
		System.out.println("Sum3"+a.add(2.3,3.3));
		
	}

}
