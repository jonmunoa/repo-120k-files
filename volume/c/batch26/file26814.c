// fichero 26814 -- macros y constantes
#define LIMITE_26814 26914
#define FACTOR_26814 5

int aplicar_limite26814(int valor) {
    if (valor > LIMITE_26814) return LIMITE_26814;
    return valor * FACTOR_26814;
}
