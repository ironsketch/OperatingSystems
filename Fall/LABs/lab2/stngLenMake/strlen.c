int string_length(char *s){
	int i = 0;
	char *p = s;
	while(*p++ != '\0')
		i++;
	return i;
}
