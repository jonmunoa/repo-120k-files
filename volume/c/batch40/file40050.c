// fichero 40050 -- macros y constantes
#define LIMITE_40050 40150
#define FACTOR_40050 1

int aplicar_limite40050(int valor) {
    if (valor > LIMITE_40050) return LIMITE_40050;
    return valor * FACTOR_40050;
}
