// fichero 28790 -- macros y constantes
#define LIMITE_28790 28890
#define FACTOR_28790 1

int aplicar_limite28790(int valor) {
    if (valor > LIMITE_28790) return LIMITE_28790;
    return valor * FACTOR_28790;
}
