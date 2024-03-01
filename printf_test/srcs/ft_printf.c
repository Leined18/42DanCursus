# include "../printf.h"

int main()
{
    char *set;
    t_list *result;
    char *str;
    scanf("%s", str);

    result->next = NULL;
    set = ft_substr(str, 2, ft_strlen(str));
    result->content = set;
    printf("%s\n", result->content);
    return (0);
}
