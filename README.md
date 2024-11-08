# Libft
<br>

<p align="center">
  <img src="https://github.com/0bvim/42-project-badges/raw/main/badges/libftm.png">
</p>

<br>

<p text align="center"> É um projeto onde é construída uma biblioteca, com algumas funções de diversas bibliotecas que há em C. </p>
  <p text align="center"> Todas elas foram construídas do zero. </p>

  <br>

**➡️ files.c:** Onde todas as funções são escritas.

**➡️ .h (header):** O arquivo de cabeçalho.

**➡️ Makefile:** é o arquivo usado para compilar os arquivos .c.

<br>

## ⚙️ Funções da Libft
<br>

**🔧  Funções da biblioteca <ctype.h>**

- `ft_isalpha`verificação para um caractere alfabético.
- `ft_isdigit`verifica se há um dígito (de 0 a 9).
- `ft_isalnum`verifica se há um caractere alfanumérico.
- `ft_isascii`verifica se c se encaixa no conjunto de caracteres ASCII.
- `ft_isprint`verifica se há algum caractere imprimível.
- `ft_toupper`converte char em maiúsculas.
- `ft_tolower`converte char para minúsculas.

<br>

**🔧  Funções da biblioteca <string.h>**

- `ft_memset`preenche a memória com um byte constante.
- `ft_strlen`calcula o comprimento de uma string.
- `ft_bzero`zera uma cadeia de bytes.
- `ft_memcpy`copia a área de memória.
- `ft_memmove`copia a área de memória (além de lidar com overlap).
- `ft_strlcpy`copia uma string para um tamanho específico.
- `ft_strlcat`concatena uma string para um tamanho específico.
- `ft_strchr`localiza o caractere na string.
- `ft_strrchr`localiza o caractere na string.
- `ft_strncmp`compara duas strings.
- `ft_memchr`escaneia a memória em busca de um caractere.
- `ft_memcmp`compara áreas de memória.
- `ft_strnstr`localiza uma substring em uma string.
- `ft_strdup`duplica uma string alocando memória.

<br>

**🔧  Funções da biblioteca <stdlib.h>gera um número para um descritor de arquivo.**

- `ft_atoi`converte uma string para um inteiro.
- `ft_calloc`aloca memória e define os valores do bytes para 0.

<br>

**🔧  Funções que não tem biblioteca**

- `ft_substr`retorna uma substring de uma string.
- `ft_strjoin` concatena duas strings dentro de uma alocação de memória.
- `ft_strtrim` corta o início e o fim da string com um conjunto específico de caracteres.
- `ft_split` divide uma string usando um char como parâmetro.
- `ft_itoa` converte um número inteiro para string.
- `ft_strmapi`aplica a função f em cada caractére da string s e copia a string s para retornar.
- `ft_striteri`aplica a função f em cada caractére da string s.
- `ft_putchar_fd` gera um char para um descritor de arquivo.
- `ft_putstr_fd`gera uma string para um descritor de arquivo.
- `ft_putendl_fd` gera uma string para um descritor de arquivo, seguida por uma nova linha.
- `ft_putnbr_fd`gera um número para um descritor de arquivo.

<br>
<hr>
