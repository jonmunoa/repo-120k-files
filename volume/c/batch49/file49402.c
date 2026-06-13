// fichero 49402 -- macros y constantes
#define LIMITE_49402 49502
#define FACTOR_49402 3

int aplicar_limite49402(int valor) {
    if (valor > LIMITE_49402) return LIMITE_49402;
    return valor * FACTOR_49402;
}
