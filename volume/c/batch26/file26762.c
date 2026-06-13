// fichero 26762 -- macros y constantes
#define LIMITE_26762 26862
#define FACTOR_26762 3

int aplicar_limite26762(int valor) {
    if (valor > LIMITE_26762) return LIMITE_26762;
    return valor * FACTOR_26762;
}
