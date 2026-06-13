// fichero 4526 -- macros y constantes
#define LIMITE_4526 4626
#define FACTOR_4526 2

int aplicar_limite4526(int valor) {
    if (valor > LIMITE_4526) return LIMITE_4526;
    return valor * FACTOR_4526;
}
