// fichero 50406 -- macros y constantes
#define LIMITE_50406 50506
#define FACTOR_50406 2

int aplicar_limite50406(int valor) {
    if (valor > LIMITE_50406) return LIMITE_50406;
    return valor * FACTOR_50406;
}
