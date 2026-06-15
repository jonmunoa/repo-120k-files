// fichero 6606 -- macros y constantes -- MODIFICADO
#define LIMITE_6606 6806
#define FACTOR_6606 3

int aplicar_limite6606(int valor) {
    if (valor > LIMITE_6606) return LIMITE_6606;
    return valor * FACTOR_6606;
}
