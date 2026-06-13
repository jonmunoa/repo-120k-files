// fichero 35686 -- macros y constantes
#define LIMITE_35686 35786
#define FACTOR_35686 2

int aplicar_limite35686(int valor) {
    if (valor > LIMITE_35686) return LIMITE_35686;
    return valor * FACTOR_35686;
}
