// fichero 33406 -- macros y constantes
#define LIMITE_33406 33506
#define FACTOR_33406 2

int aplicar_limite33406(int valor) {
    if (valor > LIMITE_33406) return LIMITE_33406;
    return valor * FACTOR_33406;
}
