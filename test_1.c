#include  <stdio.h>

main()
{
	//printf("hello,world\t");
	//printf("hello,world123\n");
	//printf("hello,world123\n);

	//convert_temperature();  //convert the Cel_temp to Fah_temp  ������2021/6/8/
	getchar_putchar();



	return 0;
}

int convert_temperature()
{
	double convert_list[100][2] ;         //����������Ǵ�0��ʼ��
	int count = 0;
	while (1)
	{

		int fig = 0;
		printf("Do you want to convert Cel_temo to Fah_temp (yes or no) ");
		scanf_s("%d", &fig);
		if (fig == 1)
		{
			double Fah_temp, Cel_temp = 0;
			printf("Type the Cel_temp you want : ");
			scanf_s("%lf", &Cel_temp);						//%lf��ʾ���double
			Fah_temp = 32 + Cel_temp * 1.8;
			printf("the Fah_temp is : %.2lf\n", Fah_temp);   //ע�ⶨ��Ϊfloat �����ʱ�����%f , %.2f��ʾ������λС����
			
			convert_list[count][0] = Cel_temp;
			convert_list[count][1] = Fah_temp;
			count = count + 1;
			/*if (count == 5)
			{
				break;
			}*/
				
		}													
		else
		{
			printf("thank you \n");
			printf("\t\tthe convert list you give is shown as below\n ");
			for ( int i = 0; i < count; i++)
			{
				printf("%8.2lf  %8.2lf\n", convert_list[i][0], convert_list[i][1]);  //Ϊɶ���һ�п�һ��
			}
			break;
		}	
	}
	return 0;
}
 
int getchar_putchar()
{
	int c, count = 0, count_n = 0, count_space = 0;
	while ((c=getchar())!=EOF)
	{
		//putchar(c);
		//putchar(EOF);       //ctrl z + enter��ʾEOF���ļ���β 
		//printf("%d\n", EOF);    //EOF ������ -1
		//printf("%d\n", getchar()!=EOF);
		if (c == '\n')
		{
			++count_n;
			printf("\\n");

		}
		if (c == ' ')
		{
			++count_space;
			printf("\\ ");

		}
		
	}
	printf("the Enter you tyoe in is :%d\n", count_n);       //getchar�����ʱ��Ҫ�����з� ASCII=%d=10
	printf("the Space you tyoe in is :%d\n", count_space);
}