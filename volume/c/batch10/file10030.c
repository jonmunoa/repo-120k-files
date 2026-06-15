// fichero 10030 -- macros y constantes -- MODIFICADO
#define LIMITE_10030 10230
#define FACTOR_10030 2

int aplicar_limite10030(int valor) {
    if (valor > LIMITE_10030) return LIMITE_10030;
    return valor * FACTOR_10030;
}
