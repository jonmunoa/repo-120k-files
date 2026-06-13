// fichero 5442 -- macros y constantes
#define LIMITE_5442 5542
#define FACTOR_5442 3

int aplicar_limite5442(int valor) {
    if (valor > LIMITE_5442) return LIMITE_5442;
    return valor * FACTOR_5442;
}
