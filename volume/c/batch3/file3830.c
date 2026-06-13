// fichero 3830 -- macros y constantes
#define LIMITE_3830 3930
#define FACTOR_3830 1

int aplicar_limite3830(int valor) {
    if (valor > LIMITE_3830) return LIMITE_3830;
    return valor * FACTOR_3830;
}
