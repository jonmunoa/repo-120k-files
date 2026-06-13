// fichero 4686 -- macros y constantes
#define LIMITE_4686 4786
#define FACTOR_4686 2

int aplicar_limite4686(int valor) {
    if (valor > LIMITE_4686) return LIMITE_4686;
    return valor * FACTOR_4686;
}
