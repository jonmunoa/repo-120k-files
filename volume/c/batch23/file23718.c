// fichero 23718 -- macros y constantes
#define LIMITE_23718 23818
#define FACTOR_23718 4

int aplicar_limite23718(int valor) {
    if (valor > LIMITE_23718) return LIMITE_23718;
    return valor * FACTOR_23718;
}
