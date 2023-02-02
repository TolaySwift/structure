#include <stdio.h>



typedef struct people
{
    char tel[12];
    char sex[5];
}p;////用typedef将p定义为people这个结构体类型

struct stu////struct 结构体关键字 stu结构体标签  struct stu 结构体类型
{
    ////成员变量
    short age;
    char name[20];
    p p1;////只有前面先定义来的结构体才能在接下来的结构体中使用
}s1,s2,s3;//// 这三个变量就是用结构体类型创建的全局变量

void print1(struct stu student)////需要建立空间进行临时拷贝
{
    printf("%d\n",student.age);
    printf("%s\n",student.name);
    printf("%s\n",student.p1.tel);
    printf("%s\n",student.p1.sex);
}////.访问结构体成员

void print2(struct stu* student)////不需要新建立空间
{
    printf("%d\n",student->age);
    printf("%s\n",student->name);
    printf("%s\n",student->p1.tel);
    printf("%s\n",student->p1.sex);
}////->访问结构体指针所指向的成员

int main()
{
    struct stu s={20,"张三","18220174841","男"};////这个变量是用结构体创建的局部变量
    p people={"18220174841","男"};
    print1(s);
    print2(&s);
    return 0;
}
