// fichero 20442 -- macros y constantes -- MODIFICADO
#define LIMITE_20442 20642
#define FACTOR_20442 4

int aplicar_limite20442(int valor) {
    if (valor > LIMITE_20442) return LIMITE_20442;
    return valor * FACTOR_20442;
}
