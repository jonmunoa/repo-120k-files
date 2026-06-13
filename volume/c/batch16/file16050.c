// fichero 16050 -- macros y constantes
#define LIMITE_16050 16150
#define FACTOR_16050 1

int aplicar_limite16050(int valor) {
    if (valor > LIMITE_16050) return LIMITE_16050;
    return valor * FACTOR_16050;
}
