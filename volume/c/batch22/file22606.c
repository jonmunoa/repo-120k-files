// fichero 22606 -- macros y constantes
#define LIMITE_22606 22706
#define FACTOR_22606 2

int aplicar_limite22606(int valor) {
    if (valor > LIMITE_22606) return LIMITE_22606;
    return valor * FACTOR_22606;
}
