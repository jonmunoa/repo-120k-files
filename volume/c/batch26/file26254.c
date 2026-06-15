// fichero 26254 -- macros y constantes -- MODIFICADO
#define LIMITE_26254 26454
#define FACTOR_26254 6

int aplicar_limite26254(int valor) {
    if (valor > LIMITE_26254) return LIMITE_26254;
    return valor * FACTOR_26254;
}
