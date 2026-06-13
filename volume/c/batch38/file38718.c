// fichero 38718 -- macros y constantes
#define LIMITE_38718 38818
#define FACTOR_38718 4

int aplicar_limite38718(int valor) {
    if (valor > LIMITE_38718) return LIMITE_38718;
    return valor * FACTOR_38718;
}
