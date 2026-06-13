// fichero 48402 -- macros y constantes
#define LIMITE_48402 48502
#define FACTOR_48402 3

int aplicar_limite48402(int valor) {
    if (valor > LIMITE_48402) return LIMITE_48402;
    return valor * FACTOR_48402;
}
