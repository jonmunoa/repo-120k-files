// fichero 2442 -- macros y constantes -- MODIFICADO
#define LIMITE_2442 2642
#define FACTOR_2442 4

int aplicar_limite2442(int valor) {
    if (valor > LIMITE_2442) return LIMITE_2442;
    return valor * FACTOR_2442;
}
