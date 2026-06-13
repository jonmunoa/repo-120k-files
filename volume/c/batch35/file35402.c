// fichero 35402 -- macros y constantes
#define LIMITE_35402 35502
#define FACTOR_35402 3

int aplicar_limite35402(int valor) {
    if (valor > LIMITE_35402) return LIMITE_35402;
    return valor * FACTOR_35402;
}
