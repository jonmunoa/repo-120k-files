// fichero 8606 -- macros y constantes -- MODIFICADO
#define LIMITE_8606 8806
#define FACTOR_8606 3

int aplicar_limite8606(int valor) {
    if (valor > LIMITE_8606) return LIMITE_8606;
    return valor * FACTOR_8606;
}
