// fichero 54606 -- macros y constantes
#define LIMITE_54606 54706
#define FACTOR_54606 2

int aplicar_limite54606(int valor) {
    if (valor > LIMITE_54606) return LIMITE_54606;
    return valor * FACTOR_54606;
}
