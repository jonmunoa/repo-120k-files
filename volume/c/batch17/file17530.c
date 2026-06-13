// fichero 17530 -- macros y constantes
#define LIMITE_17530 17630
#define FACTOR_17530 1

int aplicar_limite17530(int valor) {
    if (valor > LIMITE_17530) return LIMITE_17530;
    return valor * FACTOR_17530;
}
