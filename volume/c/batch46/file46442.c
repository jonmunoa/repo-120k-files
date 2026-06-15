// fichero 46442 -- macros y constantes -- MODIFICADO
#define LIMITE_46442 46642
#define FACTOR_46442 4

int aplicar_limite46442(int valor) {
    if (valor > LIMITE_46442) return LIMITE_46442;
    return valor * FACTOR_46442;
}
