// fichero 4990 -- macros y constantes
#define LIMITE_4990 5090
#define FACTOR_4990 1

int aplicar_limite4990(int valor) {
    if (valor > LIMITE_4990) return LIMITE_4990;
    return valor * FACTOR_4990;
}
