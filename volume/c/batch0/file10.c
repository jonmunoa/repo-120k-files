// fichero 10 -- macros y constantes
#define LIMITE_10 110
#define FACTOR_10 1

int aplicar_limite10(int valor) {
    if (valor > LIMITE_10) return LIMITE_10;
    return valor * FACTOR_10;
}
