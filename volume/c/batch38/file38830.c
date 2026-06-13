// fichero 38830 -- macros y constantes
#define LIMITE_38830 38930
#define FACTOR_38830 1

int aplicar_limite38830(int valor) {
    if (valor > LIMITE_38830) return LIMITE_38830;
    return valor * FACTOR_38830;
}
