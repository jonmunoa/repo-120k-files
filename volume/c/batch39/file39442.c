// fichero 39442 -- macros y constantes
#define LIMITE_39442 39542
#define FACTOR_39442 3

int aplicar_limite39442(int valor) {
    if (valor > LIMITE_39442) return LIMITE_39442;
    return valor * FACTOR_39442;
}
