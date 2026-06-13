// fichero 46790 -- macros y constantes
#define LIMITE_46790 46890
#define FACTOR_46790 1

int aplicar_limite46790(int valor) {
    if (valor > LIMITE_46790) return LIMITE_46790;
    return valor * FACTOR_46790;
}
