// fichero 52106 -- macros y constantes
#define LIMITE_52106 52206
#define FACTOR_52106 2

int aplicar_limite52106(int valor) {
    if (valor > LIMITE_52106) return LIMITE_52106;
    return valor * FACTOR_52106;
}
