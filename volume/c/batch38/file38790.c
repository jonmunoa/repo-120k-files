// fichero 38790 -- macros y constantes
#define LIMITE_38790 38890
#define FACTOR_38790 1

int aplicar_limite38790(int valor) {
    if (valor > LIMITE_38790) return LIMITE_38790;
    return valor * FACTOR_38790;
}
