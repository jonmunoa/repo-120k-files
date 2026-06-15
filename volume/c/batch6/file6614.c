// fichero 6614 -- macros y constantes -- MODIFICADO
#define LIMITE_6614 6814
#define FACTOR_6614 6

int aplicar_limite6614(int valor) {
    if (valor > LIMITE_6614) return LIMITE_6614;
    return valor * FACTOR_6614;
}
