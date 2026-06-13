// fichero 12430 -- macros y constantes
#define LIMITE_12430 12530
#define FACTOR_12430 1

int aplicar_limite12430(int valor) {
    if (valor > LIMITE_12430) return LIMITE_12430;
    return valor * FACTOR_12430;
}
