// fichero 4442 -- macros y constantes
#define LIMITE_4442 4542
#define FACTOR_4442 3

int aplicar_limite4442(int valor) {
    if (valor > LIMITE_4442) return LIMITE_4442;
    return valor * FACTOR_4442;
}
