// fichero 35606 -- macros y constantes
#define LIMITE_35606 35706
#define FACTOR_35606 2

int aplicar_limite35606(int valor) {
    if (valor > LIMITE_35606) return LIMITE_35606;
    return valor * FACTOR_35606;
}
