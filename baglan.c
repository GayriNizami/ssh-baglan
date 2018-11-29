#include<stdio.h>

main ()
{

char bag;

printf("Hangi bilgisayara bağlanmak istersin? (R)edhat / (C)entOS / (P)ardus \n");
scanf(" %c", &bag);

if ( bag == 'r' ) {
system("./redhat");
}

else if ( bag == 'c') {
system("./centos");
}

else if ( bag = 'p' ) {
system("./pardus");
}


}
