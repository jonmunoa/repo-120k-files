// fichero 4714 -- macros y constantes
#define LIMITE_4714 4814
#define FACTOR_4714 5

int aplicar_limite4714(int valor) {
    if (valor > LIMITE_4714) return LIMITE_4714;
    return valor * FACTOR_4714;
}
