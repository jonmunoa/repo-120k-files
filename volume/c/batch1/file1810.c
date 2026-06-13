// fichero 1810 -- macros y constantes
#define LIMITE_1810 1910
#define FACTOR_1810 1

int aplicar_limite1810(int valor) {
    if (valor > LIMITE_1810) return LIMITE_1810;
    return valor * FACTOR_1810;
}
