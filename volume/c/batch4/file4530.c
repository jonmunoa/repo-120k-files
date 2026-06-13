// fichero 4530 -- macros y constantes
#define LIMITE_4530 4630
#define FACTOR_4530 1

int aplicar_limite4530(int valor) {
    if (valor > LIMITE_4530) return LIMITE_4530;
    return valor * FACTOR_4530;
}
