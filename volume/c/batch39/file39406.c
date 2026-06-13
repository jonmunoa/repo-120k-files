// fichero 39406 -- macros y constantes
#define LIMITE_39406 39506
#define FACTOR_39406 2

int aplicar_limite39406(int valor) {
    if (valor > LIMITE_39406) return LIMITE_39406;
    return valor * FACTOR_39406;
}
