// fichero 30406 -- macros y constantes
#define LIMITE_30406 30506
#define FACTOR_30406 2

int aplicar_limite30406(int valor) {
    if (valor > LIMITE_30406) return LIMITE_30406;
    return valor * FACTOR_30406;
}
