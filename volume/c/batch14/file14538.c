// fichero 14538 -- macros y constantes -- MODIFICADO
#define LIMITE_14538 14738
#define FACTOR_14538 5

int aplicar_limite14538(int valor) {
    if (valor > LIMITE_14538) return LIMITE_14538;
    return valor * FACTOR_14538;
}
