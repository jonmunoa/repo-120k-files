// fichero 3814 -- macros y constantes
#define LIMITE_3814 3914
#define FACTOR_3814 5

int aplicar_limite3814(int valor) {
    if (valor > LIMITE_3814) return LIMITE_3814;
    return valor * FACTOR_3814;
}
