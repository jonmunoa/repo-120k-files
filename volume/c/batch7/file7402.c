// fichero 7402 -- macros y constantes
#define LIMITE_7402 7502
#define FACTOR_7402 3

int aplicar_limite7402(int valor) {
    if (valor > LIMITE_7402) return LIMITE_7402;
    return valor * FACTOR_7402;
}
