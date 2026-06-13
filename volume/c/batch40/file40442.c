// fichero 40442 -- macros y constantes
#define LIMITE_40442 40542
#define FACTOR_40442 3

int aplicar_limite40442(int valor) {
    if (valor > LIMITE_40442) return LIMITE_40442;
    return valor * FACTOR_40442;
}
