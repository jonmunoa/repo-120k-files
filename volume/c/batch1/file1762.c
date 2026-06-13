// fichero 1762 -- macros y constantes
#define LIMITE_1762 1862
#define FACTOR_1762 3

int aplicar_limite1762(int valor) {
    if (valor > LIMITE_1762) return LIMITE_1762;
    return valor * FACTOR_1762;
}
