// fichero 35966 -- macros y constantes
#define LIMITE_35966 36066
#define FACTOR_35966 2

int aplicar_limite35966(int valor) {
    if (valor > LIMITE_35966) return LIMITE_35966;
    return valor * FACTOR_35966;
}
