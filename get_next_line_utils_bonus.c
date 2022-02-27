#include "get_next_line_bonus.h"

size_t				ft_strlen(const char *s)
{
	size_t			i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			len_max;
	size_t			i;
	size_t			j;

	if (!s)
		return (NULL);
	len_max = ft_strlen(s);
	if (start >= len_max)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	int				len_2_str;

	i = 0;
	j = 0;
	len_2_str = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * (len_2_str + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char				*ft_strdup(const char *s1)
{
	char			*str;
	unsigned int	i;
	size_t			len_s1;

	i = 0;
	len_s1 = ft_strlen(s1);
	str = (char*)malloc(len_s1 + 1);
	if (str)
	{
		while (s1[i] != '\0' && i < len_s1)
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
	}
	else
		return (0);
	return (str);
}

char				*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (NULL);
}
