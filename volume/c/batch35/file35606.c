// fichero 35606 -- macros y constantes -- MODIFICADO
#define LIMITE_35606 35806
#define FACTOR_35606 3

int aplicar_limite35606(int valor) {
    if (valor > LIMITE_35606) return LIMITE_35606;
    return valor * FACTOR_35606;
}
