// fichero 37442 -- macros y constantes
#define LIMITE_37442 37542
#define FACTOR_37442 3

int aplicar_limite37442(int valor) {
    if (valor > LIMITE_37442) return LIMITE_37442;
    return valor * FACTOR_37442;
}
