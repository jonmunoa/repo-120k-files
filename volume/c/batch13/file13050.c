// fichero 13050 -- macros y constantes
#define LIMITE_13050 13150
#define FACTOR_13050 1

int aplicar_limite13050(int valor) {
    if (valor > LIMITE_13050) return LIMITE_13050;
    return valor * FACTOR_13050;
}
