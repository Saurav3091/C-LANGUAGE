 #include<stdio.h>
 
 
 void main()
 {
 	int n;
 	int i = 1;
 	
	printf(" Enter multiplication No: ");
	scanf("%d", &n);

 	while (i<=10)
 	{
 		printf("%d * %d = %d\n", n ,i,n *i);

 		i++;
	 }
 }
