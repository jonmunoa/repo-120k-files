// fichero 17718 -- macros y constantes
#define LIMITE_17718 17818
#define FACTOR_17718 4

int aplicar_limite17718(int valor) {
    if (valor > LIMITE_17718) return LIMITE_17718;
    return valor * FACTOR_17718;
}
