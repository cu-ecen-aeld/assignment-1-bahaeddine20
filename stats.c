#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char find_minimum(unsigned char test[], unsigned char l);
unsigned char find_maximum(unsigned char test[], unsigned char l);
unsigned char find_mean (unsigned char test[], unsigned char l) ;
void print_array(unsigned char test[] ,unsigned char l);
unsigned char* sort_array(unsigned char t[] ,unsigned char l);
float find_median(unsigned char t[], unsigned char l) ;
void print_statistics(unsigned char t[], unsigned char l);



void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

print_statistics(test ,SIZE);


}

unsigned char find_minimum(unsigned char test[], unsigned char l) {
    unsigned char m = test[0];
    for (int i = 0; i < l; i++) {
        if (test[i] < m) {
            m = test[i];
        }
    }
    return m;
}
    

unsigned char find_maximum(unsigned char test[], unsigned char l) {
    unsigned char m = test[0];
    for (int i = 0; i < l; i++) {
        if (test[i] >m) {
            m = test[i];
        }
    }
    return m;
}

unsigned char find_mean (unsigned char test[], unsigned char l) {
    unsigned char m =0;
    for (int i = 0; i < l; i++) {
       m+=test[i];
    }
    return m;
}




void print_array(unsigned char test[] ,unsigned char l){

for(int i=0;i<l;i++){
printf(" test[%u] = %u  \n",i+1,*(test+i));

}





}

unsigned char* sort_array(unsigned char t[] ,unsigned char l){

  unsigned char m=*t;

  for(int i=0;i<l;i++){
    m=*(t+i);
    for(int j=i;j<l;j++){
      
    
    
      if(m>*(t+j)){

        m=*(t+j);
        *(t+j)=*(t+i);
        *(t+i)=m;
        
        
      

      }
    }

}



return t;


}


float find_median(unsigned char t[], unsigned char l) {
	if(l%2==0){
		return (*(t+(l/2))+*(t+(l/2)-1))/2;
	}
	else{
		return *(t+(l/2));

	}

}

void print_statistics(unsigned char test[], unsigned char l){

printf("minimum of test is  %u\n", find_minimum(test, SIZE));
printf("maximum of test is %u\n", find_maximum(test, SIZE));
printf("the mean of test is %u\n", find_mean(test, SIZE));
print_array(test ,SIZE);
printf("the  sorted of test :");
print_array(sort_array(test,SIZE) ,SIZE);
printf("the median of test is %f\n", find_median(sort_array(test,SIZE), SIZE));




}

