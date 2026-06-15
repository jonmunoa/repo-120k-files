// fichero 13914 -- macros y constantes -- MODIFICADO
#define LIMITE_13914 14114
#define FACTOR_13914 6

int aplicar_limite13914(int valor) {
    if (valor > LIMITE_13914) return LIMITE_13914;
    return valor * FACTOR_13914;
}
