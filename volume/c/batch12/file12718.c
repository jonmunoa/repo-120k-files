// fichero 12718 -- macros y constantes
#define LIMITE_12718 12818
#define FACTOR_12718 4

int aplicar_limite12718(int valor) {
    if (valor > LIMITE_12718) return LIMITE_12718;
    return valor * FACTOR_12718;
}
