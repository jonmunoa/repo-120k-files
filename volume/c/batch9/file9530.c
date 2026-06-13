// fichero 9530 -- macros y constantes
#define LIMITE_9530 9630
#define FACTOR_9530 1

int aplicar_limite9530(int valor) {
    if (valor > LIMITE_9530) return LIMITE_9530;
    return valor * FACTOR_9530;
}
