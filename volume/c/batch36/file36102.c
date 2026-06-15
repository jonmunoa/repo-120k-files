// fichero 36102 -- macros y constantes -- MODIFICADO
#define LIMITE_36102 36302
#define FACTOR_36102 4

int aplicar_limite36102(int valor) {
    if (valor > LIMITE_36102) return LIMITE_36102;
    return valor * FACTOR_36102;
}
