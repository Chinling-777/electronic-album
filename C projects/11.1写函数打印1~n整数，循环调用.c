

//写出一个函数，打印1到n的整数
#include<stdio.h>
int n;
void print1_n(int n){
    for(int i=1;i<n+1;i++){
        printf("%d",i);
    }
    return;
}

int main(){
    printf("please enter an integer\n ");
    int n;
    scanf("%d",&n);
    print1_n(n);

	return 0;
}
//notes: ";"和"{}"均能分割不同代码块，故有}时无需分号，}while{};就是一个很好的例子
//与python不同，c中每一个变量都必须先定义类型
//且c的printf不能直接计算表达式，因为不确定其类型，必须有代表（%d）明确数据类型才行，scanf也是同理
//scanf：接受的数据有类型，存入该类型对应的地址
//printf：循着变量名找到数据地址，但再输出到终端还需要明确变量类型
//%d 告诉 scanf：我想要一个 整数
//int a;
//scanf("%d",&a);
//scanf 从缓冲区拿字符，遇到 可以构成整数的字符 就累加
//
//1' → 1
//
//'2' → 12
//
//'3' → 123
//
//遇到 空格、回车或非数字字符 时，停止读取
//
//把整数 存入变量 a 的内存地址（所以要传 &a）
//
//多余的字符（比如回车 \n）仍然留在缓冲区里，可能会影响下一次输入