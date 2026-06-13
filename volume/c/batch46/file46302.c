// fichero 46302 -- macros y constantes
#define LIMITE_46302 46402
#define FACTOR_46302 3

int aplicar_limite46302(int valor) {
    if (valor > LIMITE_46302) return LIMITE_46302;
    return valor * FACTOR_46302;
}
