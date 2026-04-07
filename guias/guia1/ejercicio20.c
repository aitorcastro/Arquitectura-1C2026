int b, c; // file scope static duration
void f(void){
        int b, d; //block scope, automatic duration
}
void g(int a){ //block scope, automatic
        int c; //block scope automatic
        {
        int a, d; //block scope automatic
        }
}