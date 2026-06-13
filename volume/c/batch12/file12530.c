// fichero 12530 -- macros y constantes
#define LIMITE_12530 12630
#define FACTOR_12530 1

int aplicar_limite12530(int valor) {
    if (valor > LIMITE_12530) return LIMITE_12530;
    return valor * FACTOR_12530;
}
