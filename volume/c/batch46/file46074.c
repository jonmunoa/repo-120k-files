// fichero 46074 -- macros y constantes
#define LIMITE_46074 46174
#define FACTOR_46074 5

int aplicar_limite46074(int valor) {
    if (valor > LIMITE_46074) return LIMITE_46074;
    return valor * FACTOR_46074;
}
