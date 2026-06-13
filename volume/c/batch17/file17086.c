// fichero 17086 -- macros y constantes
#define LIMITE_17086 17186
#define FACTOR_17086 2

int aplicar_limite17086(int valor) {
    if (valor > LIMITE_17086) return LIMITE_17086;
    return valor * FACTOR_17086;
}
