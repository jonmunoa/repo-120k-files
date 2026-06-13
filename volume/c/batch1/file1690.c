// fichero 1690 -- macros y constantes
#define LIMITE_1690 1790
#define FACTOR_1690 1

int aplicar_limite1690(int valor) {
    if (valor > LIMITE_1690) return LIMITE_1690;
    return valor * FACTOR_1690;
}
