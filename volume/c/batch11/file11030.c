// fichero 11030 -- macros y constantes -- MODIFICADO
#define LIMITE_11030 11230
#define FACTOR_11030 2

int aplicar_limite11030(int valor) {
    if (valor > LIMITE_11030) return LIMITE_11030;
    return valor * FACTOR_11030;
}
