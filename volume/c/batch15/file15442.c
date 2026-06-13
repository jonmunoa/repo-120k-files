// fichero 15442 -- macros y constantes
#define LIMITE_15442 15542
#define FACTOR_15442 3

int aplicar_limite15442(int valor) {
    if (valor > LIMITE_15442) return LIMITE_15442;
    return valor * FACTOR_15442;
}
