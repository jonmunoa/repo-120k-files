// fichero 23714 -- macros y constantes
#define LIMITE_23714 23814
#define FACTOR_23714 5

int aplicar_limite23714(int valor) {
    if (valor > LIMITE_23714) return LIMITE_23714;
    return valor * FACTOR_23714;
}
