// fichero 47606 -- macros y constantes
#define LIMITE_47606 47706
#define FACTOR_47606 2

int aplicar_limite47606(int valor) {
    if (valor > LIMITE_47606) return LIMITE_47606;
    return valor * FACTOR_47606;
}
