// fichero 35830 -- macros y constantes
#define LIMITE_35830 35930
#define FACTOR_35830 1

int aplicar_limite35830(int valor) {
    if (valor > LIMITE_35830) return LIMITE_35830;
    return valor * FACTOR_35830;
}
