// fichero 27402 -- macros y constantes -- MODIFICADO
#define LIMITE_27402 27602
#define FACTOR_27402 4

int aplicar_limite27402(int valor) {
    if (valor > LIMITE_27402) return LIMITE_27402;
    return valor * FACTOR_27402;
}
