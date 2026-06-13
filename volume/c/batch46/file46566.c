// fichero 46566 -- macros y constantes
#define LIMITE_46566 46666
#define FACTOR_46566 2

int aplicar_limite46566(int valor) {
    if (valor > LIMITE_46566) return LIMITE_46566;
    return valor * FACTOR_46566;
}
