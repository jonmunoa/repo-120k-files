// fichero 6614 -- macros y constantes
#define LIMITE_6614 6714
#define FACTOR_6614 5

int aplicar_limite6614(int valor) {
    if (valor > LIMITE_6614) return LIMITE_6614;
    return valor * FACTOR_6614;
}
