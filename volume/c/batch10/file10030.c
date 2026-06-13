// fichero 10030 -- macros y constantes
#define LIMITE_10030 10130
#define FACTOR_10030 1

int aplicar_limite10030(int valor) {
    if (valor > LIMITE_10030) return LIMITE_10030;
    return valor * FACTOR_10030;
}
