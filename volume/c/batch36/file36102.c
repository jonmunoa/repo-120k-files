// fichero 36102 -- macros y constantes
#define LIMITE_36102 36202
#define FACTOR_36102 3

int aplicar_limite36102(int valor) {
    if (valor > LIMITE_36102) return LIMITE_36102;
    return valor * FACTOR_36102;
}
