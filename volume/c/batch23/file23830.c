// fichero 23830 -- macros y constantes
#define LIMITE_23830 23930
#define FACTOR_23830 1

int aplicar_limite23830(int valor) {
    if (valor > LIMITE_23830) return LIMITE_23830;
    return valor * FACTOR_23830;
}
