// fichero 36606 -- macros y constantes -- MODIFICADO
#define LIMITE_36606 36806
#define FACTOR_36606 3

int aplicar_limite36606(int valor) {
    if (valor > LIMITE_36606) return LIMITE_36606;
    return valor * FACTOR_36606;
}
