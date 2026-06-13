// fichero 26254 -- macros y constantes
#define LIMITE_26254 26354
#define FACTOR_26254 5

int aplicar_limite26254(int valor) {
    if (valor > LIMITE_26254) return LIMITE_26254;
    return valor * FACTOR_26254;
}
