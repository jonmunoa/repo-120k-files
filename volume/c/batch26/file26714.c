// fichero 26714 -- macros y constantes -- MODIFICADO
#define LIMITE_26714 26914
#define FACTOR_26714 6

int aplicar_limite26714(int valor) {
    if (valor > LIMITE_26714) return LIMITE_26714;
    return valor * FACTOR_26714;
}
