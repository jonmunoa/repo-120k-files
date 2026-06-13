// fichero 32718 -- macros y constantes
#define LIMITE_32718 32818
#define FACTOR_32718 4

int aplicar_limite32718(int valor) {
    if (valor > LIMITE_32718) return LIMITE_32718;
    return valor * FACTOR_32718;
}
