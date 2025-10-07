#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>  // 新增：包含system函数所需的头文件
#include <locale.h>

int main(){



    int mike_score;
    int john_score;
    mike_score=89;
    john_score=98;
    int change;
    printf("Mike的成绩是%d分。\n",mike_score);
    printf("John的成绩是%d分。\n",john_score);
    change=mike_score;
    mike_score=john_score;
    john_score=change;
    printf("Mike的成绩是%d分。\n",mike_score);
    printf("John的成绩是%d分。\n",john_score);


    printf("His favorite song is \"Lemon Tree\".");
    printf("\nC:\\Users\\Example");


    char gender_1_char='f';
    char gender_2_char='m';
    printf("\n性别1:%d\n性别2:%d\n",gender_1_char,gender_2_char);
    printf("\n性别1:%c\n性别2:%c\n",gender_1_char,gender_2_char);
    char gender_1_str[]="男";
    char gender_2_str[]="女";
    printf("\n性别1:%s\n性别2:%s\n",gender_1_str,gender_2_str);
    printf("\n性别1:%p\n性别2:%p\n",gender_1_str,gender_2_str);  // 修正：字符串地址用%p输出
    

    printf("%zu\n",sizeof(char));
    float float_1=11.2334;
    float float_2=11.2323456789876543234567898765432345678934;
    printf("float_1:%f\n",float_1);
    printf("float_2:%f\n",float_2);//注意：会四舍五入
    
    double double_1=13.2334542398428791736837416823417245;
    printf("double_1:%.16f\n",double_1);
    printf("double_1:%.10lf\n",double_1);
    printf("double_1:%16f\n",double_1);
    
    int result_1=2+10/8*3;
    printf("result_1=%d\n",result_1);
    double result_2=2+10/8.0*3;
    printf("result_2=%lf\n",result_2);
    printf("result_2=%.2lf\n",result_2);
    




    int a=1;
    int b=5;
    int c=4;
    // 修正：添加括号确保运算顺序正确
    double double_x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    double double_x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("该一元二次方程的解：X1=%lf,X2=%lf\n",double_x1,double_x2);
    
    printf("%c\n%d\n",mike_score,mike_score);
    
    int q=2,w=8;
    if (a>b){
        printf("差值：%d",q-w);
    }
    else{
        printf("差值：%d\n",-q+w);  // 新增换行符，优化输出格式
    };

/*
题目：
定义出用户类型变量user_type(1表示普通用户，2表示会员用户，3是我)，以及商
品价格变量price.
某折扣规则如下：
如果是普通用户且商品价格大于100，则打95折，否则无折扣。
如果是会员用户且价格大于200，则打9折，否则打97折。
根据上述折扣规则写出对应嵌套条件语句，并打印出会员购买180元商品时
最终需要支付的金额，支付金额保留两位小数。
打印格式：最终支付金额为：*/



    int user_type;
    float price,pay;
    printf("请输入您的类型：\n");
    scanf("%d",&user_type);
    printf("请输入您的金额：\n");
    scanf("%f",&price);  // 修正：启用输入并使用%f格式符
    
    // 修正：将赋值符号=改为比较符号==
    if(user_type==1){
        if(price>=100){
            pay=price*0.95;
        }
        else{
            pay=price;
        }
    }
    else if (user_type==3)  // 同样修正为==
    {
        pay=0;
    }
    else{
        if(price>=50){
            pay=price*0.8;
        }
        else{
            pay=price*0.6;
        }
    }
    // 修正：float类型用%f输出，保留两位小数更合理
    printf("你要支付：%.2f元\n",pay);

/*
题目：
已知商品类别有电子产品和服装。
(1 代表电子产品，2 代表服装)
如果商品类别是电子产品：
价格小于500元，输出“电子产品价格较低，无优惠”。
价格在500元到1000元之间，输出“电子产品可享受5%的优惠”。
价格大于1000元，输出“电子产品可享受10%的优惠”。
如果商品类别是服装：
价格小于200元，输出“服装价格较低，无优惠”。
价格在200元到500元之间，输出“服装可享受8%的优惠”。
价格大于500元，输出“服装可享受15%的优惠”。
定义一个int类型变量category表示商品类别和一个float类型变量price表示价
格
打印出购买服装满299.9元时有什么优惠。*/



    int category;
    printf("请输入您的商品类型：\n");
    scanf("%d",&category);
    price=299.9;
    switch(category){
        case 1:
            if (price<500){
                printf("电子产品价格较低，无优惠\n");
            }
            else if(price<=1000){
                printf("电子产品可享受5%%的优惠\n");
            }
            else{
                printf("电子产品可享受10%%的优惠\n");
            }
            break;
        case 2:
            if (price<200){
                printf("服装价格较低，无优惠\n");
            }
            else if(price<=500){
                printf("服装可享受8%%的优惠\n");
            }
            else{
                printf("服装可享受15%%的优惠\n");
            }
            break;
        default:

            printf("未找到商品类型\n");
            break;
    }


    /*
    题目：定义一个表示年的变量，赋值为2088,
然后判断是否为闽年，并打印出结果。
打印格式：某年是/不是闰年。
润年的判断条件： 能被 4 整除但不能被 100 整
除，或者能被 400 整除。*/


    int year=2025;
    scanf(" %d",&year);
    if (((year %4==0)&&(!(year%100==0)))||(year%400==0)){
        printf("%d年是闰年\n",year);
        
    }
    else{
        printf("%d年不是闰年\n",year);
        
    }


/*

题目：
分别使用while循环和dowhile循环遍历1到100(包含100)，筛选出计算出所有偶数，
并计算它们的总和，打印出最终的计算结果。
打印格式：1到100中所有偶数的和为：值
*/
    
    // 高精度阶乘原理：用数组保存每一位数字，模拟手算乘法
    
 
    
    int result[200] = {0}; // 最多200位，足够存储100!
    result[0] = 1; // 初始为1
    int len = 1;   // 当前有效位数
    for (int i = 2; i <= 1000; i++) {
        int carry = 0;
        for (int j = 0; j < len; j++) {
            int temp = result[j] * i + carry;
            result[j] = temp % 10; // 当前位
            carry = temp / 10;     // 进位
        }
        while (carry) {
            result[len] = carry % 10;
            carry /= 10;
            len++;
        }
    }
    printf("100的阶乘为: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
    // 原理解释：
    // 1. 用int数组result保存每一位数字，result[0]是最低位。
    // 2. 每次乘以i时，逐位乘法并处理进位。
    // 3. len记录当前有效位数，最终从高位到低位输出。




    int arr[1]={28457401};
    for(int i=-1;i<8;i++){
        printf("%d\n",arr[i]);
    };
    printf("程序到此结束\n");
    return 0;
}
