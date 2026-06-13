// fichero 26442 -- macros y constantes
#define LIMITE_26442 26542
#define FACTOR_26442 3

int aplicar_limite26442(int valor) {
    if (valor > LIMITE_26442) return LIMITE_26442;
    return valor * FACTOR_26442;
}
