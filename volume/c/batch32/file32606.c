// fichero 32606 -- macros y constantes -- MODIFICADO
#define LIMITE_32606 32806
#define FACTOR_32606 3

int aplicar_limite32606(int valor) {
    if (valor > LIMITE_32606) return LIMITE_32606;
    return valor * FACTOR_32606;
}
