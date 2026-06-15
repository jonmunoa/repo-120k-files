// fichero 13606 -- macros y constantes -- MODIFICADO
#define LIMITE_13606 13806
#define FACTOR_13606 3

int aplicar_limite13606(int valor) {
    if (valor > LIMITE_13606) return LIMITE_13606;
    return valor * FACTOR_13606;
}
