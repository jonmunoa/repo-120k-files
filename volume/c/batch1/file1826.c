// fichero 1826 -- macros y constantes -- MODIFICADO
#define LIMITE_1826 2026
#define FACTOR_1826 3

int aplicar_limite1826(int valor) {
    if (valor > LIMITE_1826) return LIMITE_1826;
    return valor * FACTOR_1826;
}
