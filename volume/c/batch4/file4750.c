// fichero 4750 -- macros y constantes
#define LIMITE_4750 4850
#define FACTOR_4750 1

int aplicar_limite4750(int valor) {
    if (valor > LIMITE_4750) return LIMITE_4750;
    return valor * FACTOR_4750;
}
