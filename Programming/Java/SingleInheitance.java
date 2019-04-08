

class SuperClassA {

	public void foo(){
		System.out.println("SuperClassA");
	}
	
}

class SubClassB extends SuperClassA{
		
	public void bar(){
		System.out.println("SubClassB");
	}
	
}

public class SingleInheitance {
	public static void main(String args[]){
		SubClassB a = new SubClassB();
		
		a.foo();
		a.bar();
	}
}
