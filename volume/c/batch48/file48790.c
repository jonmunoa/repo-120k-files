// fichero 48790 -- macros y constantes
#define LIMITE_48790 48890
#define FACTOR_48790 1

int aplicar_limite48790(int valor) {
    if (valor > LIMITE_48790) return LIMITE_48790;
    return valor * FACTOR_48790;
}
