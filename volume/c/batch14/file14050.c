// fichero 14050 -- macros y constantes
#define LIMITE_14050 14150
#define FACTOR_14050 1

int aplicar_limite14050(int valor) {
    if (valor > LIMITE_14050) return LIMITE_14050;
    return valor * FACTOR_14050;
}
