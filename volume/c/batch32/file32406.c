// fichero 32406 -- macros y constantes
#define LIMITE_32406 32506
#define FACTOR_32406 2

int aplicar_limite32406(int valor) {
    if (valor > LIMITE_32406) return LIMITE_32406;
    return valor * FACTOR_32406;
}
