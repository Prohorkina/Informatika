#include <iostream>

using namespace std;

int main(){
	for (int i=0; i<10;i++){
        for (int j=0; j<10;j++){
          for (int q=0; q<10;q++){
            for (int w=0; w<10;w++){
                for (int e=0; e<10;e++){
                    for (int r=0; r<10;r++){
                        for (int t=0; t<10;t++){
                            for (int y=0; y<10;y++){
                                for (int u=0; u<10;u++){
                                    for (int o=0; o<10;o++){
                                        for (int p=0; p<10;p++){
                                            for (int a=0; a<10;a++){
                                                if ((i+j+q)%2==0){
                                                     if ((a+p+o)%3==0){
                                                        if ((q+r+u+a)%11==0){
                                                            if(j+w+r+y+o+a==21){
                                                    cout <<i << j << q << w << e << r << t << y << u << o << p << a <<endl;
                                                        }
                                                     }
                                                }
                                            }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          }
        }
	}
	return 0;
}
