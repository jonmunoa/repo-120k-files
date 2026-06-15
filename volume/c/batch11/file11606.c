// fichero 11606 -- macros y constantes -- MODIFICADO
#define LIMITE_11606 11806
#define FACTOR_11606 3

int aplicar_limite11606(int valor) {
    if (valor > LIMITE_11606) return LIMITE_11606;
    return valor * FACTOR_11606;
}
