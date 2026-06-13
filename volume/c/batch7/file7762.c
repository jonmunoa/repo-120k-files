// fichero 7762 -- macros y constantes
#define LIMITE_7762 7862
#define FACTOR_7762 3

int aplicar_limite7762(int valor) {
    if (valor > LIMITE_7762) return LIMITE_7762;
    return valor * FACTOR_7762;
}
