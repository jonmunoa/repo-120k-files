// fichero 28406 -- macros y constantes
#define LIMITE_28406 28506
#define FACTOR_28406 2

int aplicar_limite28406(int valor) {
    if (valor > LIMITE_28406) return LIMITE_28406;
    return valor * FACTOR_28406;
}
