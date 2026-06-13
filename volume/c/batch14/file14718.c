// fichero 14718 -- macros y constantes
#define LIMITE_14718 14818
#define FACTOR_14718 4

int aplicar_limite14718(int valor) {
    if (valor > LIMITE_14718) return LIMITE_14718;
    return valor * FACTOR_14718;
}
