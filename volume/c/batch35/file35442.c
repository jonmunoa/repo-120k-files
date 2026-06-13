// fichero 35442 -- macros y constantes
#define LIMITE_35442 35542
#define FACTOR_35442 3

int aplicar_limite35442(int valor) {
    if (valor > LIMITE_35442) return LIMITE_35442;
    return valor * FACTOR_35442;
}
