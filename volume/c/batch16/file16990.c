// fichero 16990 -- macros y constantes
#define LIMITE_16990 17090
#define FACTOR_16990 1

int aplicar_limite16990(int valor) {
    if (valor > LIMITE_16990) return LIMITE_16990;
    return valor * FACTOR_16990;
}
