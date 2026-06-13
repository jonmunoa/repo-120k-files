// fichero 46270 -- macros y constantes
#define LIMITE_46270 46370
#define FACTOR_46270 1

int aplicar_limite46270(int valor) {
    if (valor > LIMITE_46270) return LIMITE_46270;
    return valor * FACTOR_46270;
}
