// fichero 5686 -- macros y constantes
#define LIMITE_5686 5786
#define FACTOR_5686 2

int aplicar_limite5686(int valor) {
    if (valor > LIMITE_5686) return LIMITE_5686;
    return valor * FACTOR_5686;
}
