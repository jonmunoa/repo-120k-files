// fichero 1718 -- macros y constantes
#define LIMITE_1718 1818
#define FACTOR_1718 4

int aplicar_limite1718(int valor) {
    if (valor > LIMITE_1718) return LIMITE_1718;
    return valor * FACTOR_1718;
}
