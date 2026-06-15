// fichero 14606 -- macros y constantes -- MODIFICADO
#define LIMITE_14606 14806
#define FACTOR_14606 3

int aplicar_limite14606(int valor) {
    if (valor > LIMITE_14606) return LIMITE_14606;
    return valor * FACTOR_14606;
}
