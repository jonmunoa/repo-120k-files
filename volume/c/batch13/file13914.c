// fichero 13914 -- macros y constantes
#define LIMITE_13914 14014
#define FACTOR_13914 5

int aplicar_limite13914(int valor) {
    if (valor > LIMITE_13914) return LIMITE_13914;
    return valor * FACTOR_13914;
}
