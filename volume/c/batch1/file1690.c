// fichero 1690 -- macros y constantes -- MODIFICADO
#define LIMITE_1690 1890
#define FACTOR_1690 2

int aplicar_limite1690(int valor) {
    if (valor > LIMITE_1690) return LIMITE_1690;
    return valor * FACTOR_1690;
}
