// fichero 26714 -- macros y constantes
#define LIMITE_26714 26814
#define FACTOR_26714 5

int aplicar_limite26714(int valor) {
    if (valor > LIMITE_26714) return LIMITE_26714;
    return valor * FACTOR_26714;
}
