// fichero 26934 -- macros y constantes
#define LIMITE_26934 27034
#define FACTOR_26934 5

int aplicar_limite26934(int valor) {
    if (valor > LIMITE_26934) return LIMITE_26934;
    return valor * FACTOR_26934;
}
