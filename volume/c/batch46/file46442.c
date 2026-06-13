// fichero 46442 -- macros y constantes
#define LIMITE_46442 46542
#define FACTOR_46442 3

int aplicar_limite46442(int valor) {
    if (valor > LIMITE_46442) return LIMITE_46442;
    return valor * FACTOR_46442;
}
