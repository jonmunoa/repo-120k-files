// fichero 46726 -- macros y constantes
#define LIMITE_46726 46826
#define FACTOR_46726 2

int aplicar_limite46726(int valor) {
    if (valor > LIMITE_46726) return LIMITE_46726;
    return valor * FACTOR_46726;
}
