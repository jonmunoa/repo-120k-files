// fichero 11030 -- macros y constantes
#define LIMITE_11030 11130
#define FACTOR_11030 1

int aplicar_limite11030(int valor) {
    if (valor > LIMITE_11030) return LIMITE_11030;
    return valor * FACTOR_11030;
}
