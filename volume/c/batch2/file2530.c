// fichero 2530 -- macros y constantes
#define LIMITE_2530 2630
#define FACTOR_2530 1

int aplicar_limite2530(int valor) {
    if (valor > LIMITE_2530) return LIMITE_2530;
    return valor * FACTOR_2530;
}
