// fichero 22442 -- macros y constantes
#define LIMITE_22442 22542
#define FACTOR_22442 3

int aplicar_limite22442(int valor) {
    if (valor > LIMITE_22442) return LIMITE_22442;
    return valor * FACTOR_22442;
}
