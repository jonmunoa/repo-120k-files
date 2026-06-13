// fichero 50914 -- macros y constantes
#define LIMITE_50914 51014
#define FACTOR_50914 5

int aplicar_limite50914(int valor) {
    if (valor > LIMITE_50914) return LIMITE_50914;
    return valor * FACTOR_50914;
}
