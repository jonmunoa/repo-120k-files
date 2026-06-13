// fichero 23390 -- macros y constantes
#define LIMITE_23390 23490
#define FACTOR_23390 1

int aplicar_limite23390(int valor) {
    if (valor > LIMITE_23390) return LIMITE_23390;
    return valor * FACTOR_23390;
}
