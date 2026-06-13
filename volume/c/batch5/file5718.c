// fichero 5718 -- macros y constantes
#define LIMITE_5718 5818
#define FACTOR_5718 4

int aplicar_limite5718(int valor) {
    if (valor > LIMITE_5718) return LIMITE_5718;
    return valor * FACTOR_5718;
}
