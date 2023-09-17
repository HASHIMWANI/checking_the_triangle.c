//checking whether the triangle is  a  scalene, isosceless,  equilaterl or a right angled triangle  
#include<stdio.h>
int main()
{
	int side1,side2,side3,a,b,c;
	printf("enter the sides of the triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3)
	printf("the triangle is equilateral ");
	
	if(side1 !=side2 && side2 !=side3 && side3 !=side1)
	printf("the triangle is  scalene");
	if(side1!=side2 && side2!=side3 &&side3==side1)
	printf("the triangle is a isosceless triangle ");
	if(side1==side2 && side2 !=side3 && side3 !=side1)
	printf("the triangle is a isosceless triangle ");
	if(side1 !=side2 && side2==side3 && side3 !=side1)
	printf("the triangle is a isosceless triangle ");
	if ( s1 == s2 && s2 == s3 )
        printf ( "Equilateral triangle\n" ) ;
	a = ( side1 * side1 ) == ( side2 * side2 ) + ( side3 * side3 ) ;
    b = ( side2 * side2 ) == ( side1 * side1 ) + ( side3 * side3 ) ;
    c = ( side3 * side3 ) == ( side1 * s1 ) + ( side2 * side2 ) ;
if ( a || b || c )
printf ( "Right-angled triangle\n" ) ;
return 0;
	
}
