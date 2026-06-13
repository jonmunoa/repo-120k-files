// fichero 30762 -- macros y constantes
#define LIMITE_30762 30862
#define FACTOR_30762 3

int aplicar_limite30762(int valor) {
    if (valor > LIMITE_30762) return LIMITE_30762;
    return valor * FACTOR_30762;
}
