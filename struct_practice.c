#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void print(student* s)
{
	//�ṹ�崫�Σ���ӡ�ṹ���ڵ���Ϣ
	printf("%s\n", s->name);
}
struct Student
{
	char name[20];
	long long  id;
	int math;
};
typedef struct Student student;
int main()
{
	
	student s = { "lixuhui", 17040413109, 100 };
	print(&s);
	system("pause");
	return 0;
}



//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, const char * argv[]) {
//
//	//����ṹ������
//	struct Person
//	{
//		char *name;
//		int age;
//		double heigth;
//	};
//
//	//��ʼ����4�ַ�ʽ
//
//	//1.�����ͬʱ��ʼ��
//	struct Person p1 = { "zhangsan",20,170 };
//
//	//2.�ȶ����������ʼ��
//	struct Person p2;
//	p2.name = "ykd";
//	p2.age = 18;
//	p2.heigth = 180;
//
//	//3.�ȶ�����һ���Գ�ʼ��
//	struct Person p3;
//	p3 = (struct Person) { "lisi", 18, 180 };
//
//	//ע�⣺�ṹ���������������������鲻���ȶ����ٽ���һ���Գ�ʼ��
//	//�ṹ��Ҫ��ȷ�ĸ���ϵͳ{}����һ���ṹ��
//
//	//4.ָ�������ݸ�ֵ��ָ��������
//	struct Person p4 = { .heigth = 1.77,.name = "wangwu",.age = 33 };
//
//
//	//��δӽṹ����ȡ���ݣ�
//	printf("name=%s,age=%i,heigth=%f\n", p4.name, p4.age, p4.heigth); //name=wangwu,age=33,heigth=1.770000
//
//	system("pause");
//	return 0;
//}
