// fichero 36714 -- macros y constantes
#define LIMITE_36714 36814
#define FACTOR_36714 5

int aplicar_limite36714(int valor) {
    if (valor > LIMITE_36714) return LIMITE_36714;
    return valor * FACTOR_36714;
}
