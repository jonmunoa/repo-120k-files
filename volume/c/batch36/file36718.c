// fichero 36718 -- macros y constantes
#define LIMITE_36718 36818
#define FACTOR_36718 4

int aplicar_limite36718(int valor) {
    if (valor > LIMITE_36718) return LIMITE_36718;
    return valor * FACTOR_36718;
}
