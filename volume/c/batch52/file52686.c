// fichero 52686 -- macros y constantes
#define LIMITE_52686 52786
#define FACTOR_52686 2

int aplicar_limite52686(int valor) {
    if (valor > LIMITE_52686) return LIMITE_52686;
    return valor * FACTOR_52686;
}
