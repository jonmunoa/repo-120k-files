// fichero 40402 -- macros y constantes
#define LIMITE_40402 40502
#define FACTOR_40402 3

int aplicar_limite40402(int valor) {
    if (valor > LIMITE_40402) return LIMITE_40402;
    return valor * FACTOR_40402;
}
