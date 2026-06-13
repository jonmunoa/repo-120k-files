// fichero 442 -- macros y constantes
#define LIMITE_442 542
#define FACTOR_442 3

int aplicar_limite442(int valor) {
    if (valor > LIMITE_442) return LIMITE_442;
    return valor * FACTOR_442;
}
