// fichero 44402 -- macros y constantes
#define LIMITE_44402 44502
#define FACTOR_44402 3

int aplicar_limite44402(int valor) {
    if (valor > LIMITE_44402) return LIMITE_44402;
    return valor * FACTOR_44402;
}
