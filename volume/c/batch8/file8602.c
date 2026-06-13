// fichero 8602 -- macros y constantes
#define LIMITE_8602 8702
#define FACTOR_8602 3

int aplicar_limite8602(int valor) {
    if (valor > LIMITE_8602) return LIMITE_8602;
    return valor * FACTOR_8602;
}
