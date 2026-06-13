// fichero 8606 -- macros y constantes
#define LIMITE_8606 8706
#define FACTOR_8606 2

int aplicar_limite8606(int valor) {
    if (valor > LIMITE_8606) return LIMITE_8606;
    return valor * FACTOR_8606;
}
