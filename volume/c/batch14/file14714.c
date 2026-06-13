// fichero 14714 -- macros y constantes
#define LIMITE_14714 14814
#define FACTOR_14714 5

int aplicar_limite14714(int valor) {
    if (valor > LIMITE_14714) return LIMITE_14714;
    return valor * FACTOR_14714;
}
