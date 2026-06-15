// fichero 46666 -- macros y constantes -- MODIFICADO
#define LIMITE_46666 46866
#define FACTOR_46666 3

int aplicar_limite46666(int valor) {
    if (valor > LIMITE_46666) return LIMITE_46666;
    return valor * FACTOR_46666;
}
