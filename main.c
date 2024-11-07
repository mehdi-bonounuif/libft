#include "libft.h"

typedef struct
{
	char name[256];
	int age;
	double average;
	int school;
} Student;

char    ft_topuer(unsigned int f, char a)
{
        if(f % 2 == 0)
                if (a >= 'a' && a <= 'z')
                        return (a - 32);
        return (a);
}

void    to_lower(unsigned int i, char *string)
{
        if (i % 2 == 0)
        {
                if (string[i] >= 'A' && string[i] <= 'Z')
                        string[i] = string[i] + 32;
        }
}

// PRINT NODES CONTENT
void    print_list2(t_list *head)
{
        t_list *temp;
        temp = head;
        while (temp != NULL)
        {
                printf("%s\n", (char *)temp->content);
                temp = temp->next;
        }

}

int	main(void)
{
	printf("\n============================\n");
	// TEST FT_ATOI
	printf("\nTEST FT_ATOI :\n");
	char test1[] = "1234";
	char test2[] = "  1234";
	char test3[] = "-1234";
	char test4[] = "+-1234";
	printf("%d\n", ft_atoi(test1));
	printf("%d\n", ft_atoi(test2));
	printf("%d\n", ft_atoi(test3));
	printf("%d\n", ft_atoi(test4));


	printf("\n============================\n");
	// TEST FT_BZERO
	printf("\nTEST FT_BZERO :\n");
	char my_text[] = "mehdi bounouif";
	size_t	len = ft_strlen(my_text);
	size_t 	max = 5;
	size_t	i = 0;

	printf("my text before bzero : %s\n", my_text);
	ft_bzero(my_text, max);
	printf("my text after bzero : ");
	while(i < len)
	{
		if(my_text[i] == '\0')
			printf("\\0");
		else
			printf("%c", my_text[i]);
		i++;
	}
	printf("\n");


	printf("\n============================\n");
	//TEST FT_ISALNUM
	printf("\nTEST FT_ISALNUM :\n");
	char a = 'a';	
	char b = 'C';
	char c = '6';
	char d = '!';

	printf("%c is %d\n", a, ft_isalnum(a));
	printf("%c is %d\n", b, ft_isalnum(b));
	printf("%c is %d\n", c, ft_isalnum(c));
	printf("%c is %d\n", d, ft_isalnum(d));


	printf("\n============================\n");
	// TEST FT_ISALPHA
	printf("\nTEST FT_ISALPHA :\n");
	char e = 'a';	
	char f = 'C';
	char j = '6';
	char h = '!';
	printf("%c is %d\n", e, ft_isalpha(a));
	printf("%c is %d\n", f, ft_isalpha(b));
	printf("%c is %d\n", j, ft_isalpha(c));
	printf("%c is %d\n", h, ft_isalpha(d));


	printf("\n============================\n");
	// TEST FT_ISASCII
	printf("\nTEST FT_ISASCII :\n");
	
	char n = 'a';	
	char g = 128;
	char k = '9';	
	char l = '!';
	printf("%d is %d\n", n, ft_isascii(n));
	printf("%d is %d\n", g, ft_isascii(g));
	printf("%d is %d\n", k, ft_isascii(k));
	printf("%d is %d\n", l, ft_isascii(l));

	
	printf("\n============================\n");
	// TEST FT_ISDIGIT[
	printf("\nTEST FT_ISDIGIT :\n");
	
	char m = 'a';
	char o = '2';
	char p = '9';
	char q = '!';
	printf("%c is %d\n", m, ft_isdigit(m));
	printf("%c is %d\n", o, ft_isdigit(o));
	printf("%c is %d\n", p, ft_isdigit(p));
	printf("%c is %d\n", q, ft_isdigit(q));


	printf("\n============================\n");
	// TEST FT_ISPRINT
	printf("\nTEST FT_ISPRINT :\n");
	
	char w = '2';
	char x = '9';
	char y = '!';
	char z = '\t';
	printf("%c is %d\n", w, ft_isdigit(w));
	printf("%c is %d\n", y, ft_isdigit(y));
	printf("%c is %d\n", x, ft_isdigit(x));
	printf("%c is %d\n", z, ft_isdigit(z));


	printf("\n============================\n");
	// TEST FT_MEMCPY
	printf("\nTEST FT_MEMCPY:\n");
	
	char src[] = "hello world";
	int kjf = 1337;
	float nums[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	char dest1[20];
	float dest2[20];
	char dest3[20];
	int dest8;

	ft_memcpy(dest1, src, strlen(src)+1);
	ft_memcpy(dest2, nums, sizeof(nums));
	ft_memcpy(dest3, src, 5);
	ft_memcpy(&dest8, &kjf, 2);

	int le = sizeof(nums)/ sizeof(nums[0]);
	int count = 0;
	
	printf("Copy integer :\n");
	printf("%d\n", dest8);

	printf("Copy list of floats :\n");
	while (count < le)
	{
		printf("%f ", dest2[count++]);
	}
	printf("\n");

	printf("Copy string :\n");
	printf("%s\n", dest1);
	
	printf("Copy part of string:\n");
	printf("%s\n", dest3);

	Student student1;
	strcpy(student1.name, "mehdi");
	student1.age = 26;
	student1.average = 8.95;
	student1.school = 1337; 
	
	Student student2;
	ft_memcpy(&student2, &student1, sizeof(student1));

	printf("Copy Struct \n");
	printf("Name = %s\n",student2.name);
	printf("Age = %d\n",student2.age);
	printf("Average = %lf\n",student2.average);
	printf("school = %d\n",student2.school);

	

	printf("\n============================\n");
	// TEST FT_MEMSET
	printf("\nTEST FT_MEMSET:\n");
	
	char tmp[20];
	char tmp1[20];
	int tmnu[5];
	int nu = 300;

	ft_memset(tmnu, nu, 16);
	int co = 0;
	while(co < 5)
	{
		printf("%d ", tmnu[co]);
		co++;
	}
	printf("\n");
	ft_memset(tmp, 'a', 7);
	ft_memset(tmp1, 'b', sizeof(tmp1));
	printf("%s|\n", tmp);
	printf("%s|\n", tmp1);


	printf("\n============================\n");
	// TEST FT_STRDUP
	printf("\nTEST FT_STRDUP:\n");

	char text[] = "mehdi bounouif";
	printf("%s\n", ft_strdup(text));


	printf("\n============================\n");
	// TEST FT_STRLEN
	printf("\nTEST FT_STRLEN\n");
	
	char name[] = "mehdi bounouif";
	size_t lenght2 = ft_strlen(name);
	printf("%s len = %ld\n", name, lenght2);

	
	printf("\n============================\n");
	// TEST FT_TOLOWER
	printf("\nTEST FT_TOLOWER:\n");

	char e1 = 'h';
	char e2 = 'M';
	printf("%c to lower %c\n", e1, ft_tolower(e1));
	printf("%c in lower %c\n", e2, ft_tolower(e2));


	printf("\n============================\n");
	// TEST FT_TOUPPER
	printf("\nTEST FT_TOUPPER:\n");

	char i1 = 'h';
	char i2 = 'M';
	printf("%c to lower %c\n", i1, ft_toupper(i1));
	printf("%c in lower %c\n", i2, ft_toupper(i2));


	printf("\n============================\n");
	// TEST FT_STRNCMP
	printf("\nTEST FT_STRNCMP:\n");

	const char *str1 = "Hello, World!";
    	const char *str2 = "Hello, there!";

   	int result1 = ft_strncmp(str1, str2, 5); // Compare first 5 characters
	printf("Text 1 is %s.\n", str1);
	printf("Text 2 is %s.\n", str2);
  	if (result1 == 0) {
        	printf("The first 5 characters are the same.\n");
   	} else {
        	printf("The first 5 characters are different.\n");
   	}


	printf("\n============================\n");
	// TEST FT_STRCHR
	printf("\nTEST FT_STRCHR:\n");
	
	const char *str3 = "Hello, world!";
	char *result2 = ft_strchr(str3, 'o');
       	printf("The text is :  %s.\nthe strchr return : '%s'\n", str3, result2);

	const char *str4 = "Mehdi Bounouif";
    	char *result3 = ft_strchr(str4, 'B');

    	if (result3) {
		 printf("The text is : %s\nFound 'B' at position: %ld\n", str4, result3 - str4);
    	} else {
		 printf("'B' not found.\n");
    	}

	const char *str5 = "Hello, World!";
    
   	// Use ft_strchr to find the null terminator
   	char *result4 = ft_strchr(str5, '\0');

    	if (result4) {
        // Calculate the position of the null terminator
       		printf("The text is : %s.\nFound null terminator at position: %ld\n", str5, result4 - str5);
    	} else {
       		printf("Null terminator not found.\n");
    	}


	printf("\n============================\n");
	// TEST FT_STRRCHR
	printf("\nTEST FT_STRRCHR:\n");
	
	const char *str6 = "Hello, world!";
	char *result5 = ft_strrchr(str6, 'o');
       	printf("The text is :  '%s'.\nSearchd character 'o' \nthe ft_strchr return : '%s'\n", str6, result5);
	const char *str7 = "Mehdi BounoBuif";
    	char *result6 = ft_strrchr(str7, 'B');

    	if (result6) {
		 printf("The text is : %s\nFound 'B' at position: %ld\n", str7, result6 - str7);
    	} else {
		 printf("'B' not found.\n");
    	}

	
	printf("\n============================\n");
	// TEST FT_MEMCMP
	printf("\nTEST FT_MEMCMP:\n");
	
	printf("Comparing strings :\n");
	char text1[] = "hello";
	char text2[] = "hello";
	char text3[] = "mehdi";

	printf("Text1 = %s\nText2 = %s\nText3 = %s\n", text1, text2, text3);

	int res1 = ft_memcmp(text1, text2, sizeof(text1));
 	int res2 = ft_memcmp(text1, text3, sizeof(text1));

	if (res1 == 0) {
        	printf("text1 and text2 are equal.\n");
   	} else {
       		printf("text1 and text2 are not equal.\n");
 	}
	if (res2 < 0) {
        	printf("text1 is less than text3.\n");
   	} else {
       		printf("text1 is greater than text3 .\n");
 	}

	printf("Comparing numbers :\n");
	int number1 = 30;
 	int number2 = 50;

	printf("Number1 = %d\nNumber2 = %d\n", number1, number2);	
 	int res3 = ft_memcmp(&number1, &number2, sizeof(number1));

	if(res3 == 0)
		printf("Number1 is equal Number2\n");
	else if(res3 > 0)
		printf("Number1 is greater than Number2\n");
	else
		printf("Number2 is greater than Number1\n");


	printf("\n============================\n");
	// TEST FT_STRNSTR
	printf("\nTEST FT_STRNSTR:\n");

	char strc[] = "hello world mehdi";
        char strd[] = "world";
        size_t lena = 12;
        char *resultb = ft_strnstr(strc, strd, lena);
	printf("String : '%s'\n", strc);
	printf("Set : '%s'\n", strd);
	printf("Len : '%ld'\n", lena);
        printf("Result '%s'\n", resultb);


	printf("\n============================\n");
	// TEST FT_MEMCHR
	printf("\nTEST FT_MEMCHR:\n");

	//int nub = 1;
	//int numbs[6] = {5,4,3,1,2,3};
 	//size_t lenn = sizeof(numbs) / sizeof(numbs[0]);
 	//void *rensu = ft_memchr(numbs, nub, lenn * sizeof(int));

	//int found = (int *)rensu;
	//size_t index = (found - numbs);

       	//printf("Found '%d' at position: %zu\n", nub, index);
	
        //printf("Memchr function Return '%d'\n",rensu);
	const char string[] = "Hello, World!";
	char ch = 'o';
 	size_t leng = ft_strlen(string);

	printf("\nText : '%s'\n", string);
 	char *resu = (char *)ft_memchr(string, ch, leng);
 	if (resu != NULL) {
       		printf("Found '%c' at position: %ld\n", ch, resu - string);
       		printf("Memchr function Return '%s'\n",resu);
 	} else {
		printf("Character '%c' not found in the string.\n", ch);
	}


	printf("\n============================\n");
	// TEST FT_STRLCAT
	printf("\nTEST FT_STRLCAT:\n");

	char des1[20] = "Hello";
	const char *source1 = " World";
	size_t resul1;
	printf("Dest : '%s'.\nSource : '%s'.\nSize of dest : %zu\n", des1, source1, sizeof(des1));
	resul1 = ft_strlcat(des1, source1, sizeof(des1));
	printf("Resulting string: '%s'\n", des1);
	printf("Total length: %zu\n", resul1);

	char des2[10] = "Hello";
	const char *source2 = " World";
	size_t resul2;
	printf("Dest : '%s'.\nSource : '%s'.\nSize of dest : %zu\n", des2, source2, sizeof(des2));
	resul2 = ft_strlcat(des2, source2 , sizeof(des2));
	printf("Resulting string: '%s'\n", des2);
	printf("Total length: %zu\n", resul2);

	char destination[8] = "Hello, ";
	const char *source8 = "World!";
	size_t result;
	printf("Dest : '%s'.\nSource : '%s'.\nSize of dest : %zu\n", destination, source8, sizeof(destination));
	result = ft_strlcat(destination, source8 , sizeof(destination));
	printf("Resulting string: '%s'\n", destination);
	printf("Total length: %zu\n", result);


	printf("\n============================\n");
	// TEST FT_STRLCPY
	printf("\nTEST FT_STRLCPY:\n");

	char destination2[10];  // Small buffer
    	const char *source9 = "Hello, World!";
   	// Copy source to destination
    	size_t resul = ft_strlcpy(destination2, source9, sizeof(destination2));
   	// Print the copied string and the return value
    	printf("Copied string: '%s'\n", destination2);
    	printf("Total length of source string: %zu\n", resul);


	printf("\n============================\n");
	// TEST FT_MEMMOVE
	printf("\nTEST FT_MEMMOVE:\n");

	char source10[] = "Hello, World!";
    	char destination3[20];

	printf("Source : '%s'\n", source10);
	printf("Destination : '%s'\n", destination3);

    	// Using memmove to copy data
    	ft_memmove(destination3, source10, ft_strlen(source10) + 1); // +1 to include the null terminator
    	printf("Source: '%s'\n", source10);
    	printf("Destination: '%s'\n", destination3);


	printf("\n============================\n");
	// TEST FT_CALLOC
	printf("\nTEST FT_CALLOC:\n");
	
	int *arr;
	size_t cont;
	size_t idx;

	cont = 5;
	arr = (int *)ft_calloc(cont, sizeof(int));
	if(!arr)
	{
		printf("Memory allocation failed!\n");
		return (0);
	}
	idx = 0;
	printf("Array beffor allocation with ft_calloc function : \n");
	while(idx < cont)
	{
		printf("arr[%zu] = %d\n", idx, arr[idx]);
		idx++;
	}
	printf("\n");


	printf("\n============================\n");
	// TEST FT_SUBSTR
	printf("\nTEST FT_SUBSTR:\n");

	char str[] = "hello world mehdi bounuif";
        unsigned int start = 6;
        size_t end = 14;

        char *result10 = ft_substr(str, start, end);
        printf("Original string '%s'\n", str);
        printf("Start : %d \n", start);
        printf("End : %ld \n", end);
        printf("Result : %s \n", result10);


	printf("\n============================\n");
	// TEST FT_STRJOIN
	printf("\nTEST FT_STRJOIN:\n");

	char stra[] = "mehdi ";
        char strb[] = "bounouif";
        char *resulta = ft_strjoin(stra, strb);
	printf("String 1 : '%s'\n", stra);
	printf("String 2 : '%s'\n", strb);
        printf("'%s'\n", resulta);


	printf("\n============================\n");
	// TEST FT_STRTRIM
	printf("\nTEST FT_STRTRIM:\n");

	char s1[] = "abc mehdiabc";
        char set[] = "abc ";
        char *re = ft_strtrim(s1, set);
	printf("String : '%s'\n", s1);
	printf("Set : '%s'\n", set);
        printf("Result '%s'\n", re);


	printf("\n============================\n");
	// TEST FT_SPLIT
	printf("\nTEST FT_SPLIT:\n");

	int i5;
	char **result9;
        char textsplit[] = "hello world";
        char sepsplit = ' ';
	i5 = 0;
        printf("Text : '%s'\n", textsplit);
        printf("Sep : '%c'\n", sepsplit);
        result9 = ft_split(textsplit, sepsplit);
        while (result9[i5])
	{
      		printf("%s\n", result9[i5]);
       		free(result9[i5]);
		i5++;
        }
        free(result9);
   	i5 = 0; 
        char textsplit2[] = "spaced-worto_lowerld-here ";
        char sepsplit2 = '-';
        printf("Text : '%s'\n", textsplit2);
        printf("Sep : '%c'\n", sepsplit2);
        result9 = ft_split(textsplit2, sepsplit2);
        while (result9[i5])
	{
       		printf("%s\n", result9[i5]);
        	free(result9[i5]);
		i5++;
   	}
        free(result9);


	printf("\n============================\n");
	// TEST FT_ITOA
	printf("\nTEST FT_ITOA:\n");

	printf("%s\n", ft_itoa(100));
	printf("%s\n", ft_itoa(0100));
  	printf("%s\n", ft_itoa(-100));
    	printf("%s\n", ft_itoa(0));
    	printf("%s\n", ft_itoa(-0));
    	printf("%s\n", ft_itoa(-2147483648));
    	printf("%s\n", ft_itoa(2147483647));


	printf("\n============================\n");
	// TEST FT_STRMAPI
	printf("\nTEST FT_STRMAPI:\n");

	char string6[] = "hello world";
        printf("%s\n", ft_strmapi(string6, ft_topuer));


	printf("\n============================\n");
	// TEST FT_STRITERI
	printf("\nTEST FT_STRITERI:\n");
	
	char string7[] = "MEHDI BOUNOUIF";
        ft_striteri(string7, to_lower);
        printf("%s\n", string7);


	printf("\n============================\n");
        // TEST FT_LSTADD_BACK
        printf("\nTEST FT_LSTADD_BACK:\n");

	t_list *head2 = ft_lstnew("hello");
        t_list *m1 = ft_lstnew("word");
        t_list *m2 = ft_lstnew("mehdi");

        ft_lstadd_back(&head2, m1);
        ft_lstadd_back(&head2, m2);

        print_list2(head2);
        free(head2);
        free(m1);
        free(m2);


	printf("\n============================\n");
        // TEST FT_LSTLAST
        printf("\nTEST FT_LSTLAST\n");

	t_list *last;
        t_list *node1 = ft_lstnew("first");
        t_list *node2 = ft_lstnew("middle");
        t_list *node3 = ft_lstnew("last");

        node1->next = node2;
        node2->next = node3;
        node3->next = NULL;
        last = ft_lstlast(node1);
        printf("%s\n", (char *)last->content);

	free(node1->next->next);
        free(node1->next);
        free(node1);


	printf("\n============================\n");
        // TEST FT_LSTADD_FRONT
        printf("\nTEST FT_LSTADD_FRONT:\n");

        char *conten = "hello";
        char *conten2 = "world";
        t_list *head = ft_lstnew(conten2);
        t_list *mem1 = ft_lstnew(conten);
        ft_lstadd_front(&head, mem1);

        print_list2(head);

        printf("\n");
        free(mem1->next);
        free(mem1);


        printf("\n============================\n");
        // TEST FT_LSTNEW
        printf("\nTEST FT_LSTNEW:\n");

        t_list *head1;
        t_list *n1, *n2, *n3;

        n1 = ft_lstnew("node one ");
        n2 = ft_lstnew("node two");
        n3 = ft_lstnew("node three ");
        head1 = n3;
        n3->next = n2;
        n2->next = n1;
        n1->next = NULL;

        print_list2(head1);


        free(n1);
        free(n2);
        free(n3);


        printf("\n============================\n");
        // TEST FT_LSTSIZE
        printf("\nTEST FT_LSTSIZE\n");

	t_list *head3;
        t_list f1;
        t_list f2;
        t_list f3;

        head3 = &f1;
        f1.next = &f2;
        f2.next = &f3;
        f3.next = NULL;

        int si = ft_lstsize(head3);

        printf("%d\n", si);

	return 0;
}

































