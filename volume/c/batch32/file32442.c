// fichero 32442 -- macros y constantes -- MODIFICADO
#define LIMITE_32442 32642
#define FACTOR_32442 4

int aplicar_limite32442(int valor) {
    if (valor > LIMITE_32442) return LIMITE_32442;
    return valor * FACTOR_32442;
}
