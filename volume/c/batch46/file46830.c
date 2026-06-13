// fichero 46830 -- macros y constantes
#define LIMITE_46830 46930
#define FACTOR_46830 1

int aplicar_limite46830(int valor) {
    if (valor > LIMITE_46830) return LIMITE_46830;
    return valor * FACTOR_46830;
}
