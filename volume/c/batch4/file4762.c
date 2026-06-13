// fichero 4762 -- macros y constantes
#define LIMITE_4762 4862
#define FACTOR_4762 3

int aplicar_limite4762(int valor) {
    if (valor > LIMITE_4762) return LIMITE_4762;
    return valor * FACTOR_4762;
}
