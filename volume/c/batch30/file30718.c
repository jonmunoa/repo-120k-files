// fichero 30718 -- macros y constantes
#define LIMITE_30718 30818
#define FACTOR_30718 4

int aplicar_limite30718(int valor) {
    if (valor > LIMITE_30718) return LIMITE_30718;
    return valor * FACTOR_30718;
}
