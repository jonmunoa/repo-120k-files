// fichero 21402 -- macros y constantes
#define LIMITE_21402 21502
#define FACTOR_21402 3

int aplicar_limite21402(int valor) {
    if (valor > LIMITE_21402) return LIMITE_21402;
    return valor * FACTOR_21402;
}
