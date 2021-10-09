int main(){
	
	int num, i=0, k, j, count=0;
	char arr[16];
	scanf("%d",&num);

	if (num == 0)
	{
		printf("0\n");
	}
	else{
		while (num)
		{
			k = num % 10;
			num = num / 10;
			arr[i] = int_to_char(k); 
			i++;
			count++;
			if (count==3 && num > 0){
				arr[i]= ',';
				count = 0;
				i++;

			}

		}
		arr[i]='\0';
		for ( j = i; j >= 0; j--)
		{
			printf("%c",arr[j]);
		}
		printf("\n");
		
	}
	return 0;
	
}