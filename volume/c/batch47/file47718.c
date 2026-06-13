// fichero 47718 -- macros y constantes
#define LIMITE_47718 47818
#define FACTOR_47718 4

int aplicar_limite47718(int valor) {
    if (valor > LIMITE_47718) return LIMITE_47718;
    return valor * FACTOR_47718;
}
