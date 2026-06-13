// fichero 54790 -- macros y constantes
#define LIMITE_54790 54890
#define FACTOR_54790 1

int aplicar_limite54790(int valor) {
    if (valor > LIMITE_54790) return LIMITE_54790;
    return valor * FACTOR_54790;
}
