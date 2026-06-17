typedef unsigned int size_t;

size_t my_strlen(char *string){
	size_t i = 0;
	while (string[i] != '\0'){
		i++;
	}
	return i;
}

int str_longer(char *string1, char *string2){
	return my_strlen(string1) > my_strlen(string2);
}



