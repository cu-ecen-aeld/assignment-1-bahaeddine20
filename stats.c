#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char find_minimum(unsigned char test[], unsigned char l);
unsigned char find_maximum(unsigned char test[], unsigned char l);
unsigned char find_mean (unsigned char test[], unsigned char l) ;

void print_array(unsigned char test[] ,unsigned char l);
unsigned char* sort_array(unsigned char t[] ,unsigned char l);


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
printf("%u\n", find_minimum(test, SIZE));
printf("%u\n", find_maximum(test, SIZE));
printf("%u\n", find_mean(test, SIZE));
print_array(test ,SIZE);
print_array(sort_array(test,SIZE) ,SIZE);
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
printf("%u \n",*(test+i));

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






