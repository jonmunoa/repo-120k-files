// fichero 4750 -- macros y constantes -- MODIFICADO
#define LIMITE_4750 4950
#define FACTOR_4750 2

int aplicar_limite4750(int valor) {
    if (valor > LIMITE_4750) return LIMITE_4750;
    return valor * FACTOR_4750;
}
