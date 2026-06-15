// fichero 1666 -- macros y constantes -- MODIFICADO
#define LIMITE_1666 1866
#define FACTOR_1666 3

int aplicar_limite1666(int valor) {
    if (valor > LIMITE_1666) return LIMITE_1666;
    return valor * FACTOR_1666;
}
