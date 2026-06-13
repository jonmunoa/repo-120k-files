// fichero 54718 -- macros y constantes
#define LIMITE_54718 54818
#define FACTOR_54718 4

int aplicar_limite54718(int valor) {
    if (valor > LIMITE_54718) return LIMITE_54718;
    return valor * FACTOR_54718;
}
