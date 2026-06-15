// fichero 47606 -- macros y constantes -- MODIFICADO
#define LIMITE_47606 47806
#define FACTOR_47606 3

int aplicar_limite47606(int valor) {
    if (valor > LIMITE_47606) return LIMITE_47606;
    return valor * FACTOR_47606;
}
