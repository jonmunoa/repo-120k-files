// fichero 52586 -- macros y constantes
#define LIMITE_52586 52686
#define FACTOR_52586 2

int aplicar_limite52586(int valor) {
    if (valor > LIMITE_52586) return LIMITE_52586;
    return valor * FACTOR_52586;
}
