// fichero 52402 -- macros y constantes
#define LIMITE_52402 52502
#define FACTOR_52402 3

int aplicar_limite52402(int valor) {
    if (valor > LIMITE_52402) return LIMITE_52402;
    return valor * FACTOR_52402;
}
