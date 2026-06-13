// fichero 47442 -- macros y constantes
#define LIMITE_47442 47542
#define FACTOR_47442 3

int aplicar_limite47442(int valor) {
    if (valor > LIMITE_47442) return LIMITE_47442;
    return valor * FACTOR_47442;
}
