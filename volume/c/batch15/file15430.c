// fichero 15430 -- macros y constantes
#define LIMITE_15430 15530
#define FACTOR_15430 1

int aplicar_limite15430(int valor) {
    if (valor > LIMITE_15430) return LIMITE_15430;
    return valor * FACTOR_15430;
}
