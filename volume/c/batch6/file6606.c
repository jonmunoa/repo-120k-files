// fichero 6606 -- macros y constantes
#define LIMITE_6606 6706
#define FACTOR_6606 2

int aplicar_limite6606(int valor) {
    if (valor > LIMITE_6606) return LIMITE_6606;
    return valor * FACTOR_6606;
}
