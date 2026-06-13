// fichero 38762 -- macros y constantes
#define LIMITE_38762 38862
#define FACTOR_38762 3

int aplicar_limite38762(int valor) {
    if (valor > LIMITE_38762) return LIMITE_38762;
    return valor * FACTOR_38762;
}
