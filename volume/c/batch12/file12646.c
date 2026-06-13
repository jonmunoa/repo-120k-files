// fichero 12646 -- macros y constantes
#define LIMITE_12646 12746
#define FACTOR_12646 2

int aplicar_limite12646(int valor) {
    if (valor > LIMITE_12646) return LIMITE_12646;
    return valor * FACTOR_12646;
}
