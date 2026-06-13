// fichero 11830 -- macros y constantes
#define LIMITE_11830 11930
#define FACTOR_11830 1

int aplicar_limite11830(int valor) {
    if (valor > LIMITE_11830) return LIMITE_11830;
    return valor * FACTOR_11830;
}
