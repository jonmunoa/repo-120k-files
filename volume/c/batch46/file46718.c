// fichero 46718 -- macros y constantes
#define LIMITE_46718 46818
#define FACTOR_46718 4

int aplicar_limite46718(int valor) {
    if (valor > LIMITE_46718) return LIMITE_46718;
    return valor * FACTOR_46718;
}
