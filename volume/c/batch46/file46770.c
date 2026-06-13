// fichero 46770 -- macros y constantes
#define LIMITE_46770 46870
#define FACTOR_46770 1

int aplicar_limite46770(int valor) {
    if (valor > LIMITE_46770) return LIMITE_46770;
    return valor * FACTOR_46770;
}
