// fichero 16966 -- macros y constantes
#define LIMITE_16966 17066
#define FACTOR_16966 2

int aplicar_limite16966(int valor) {
    if (valor > LIMITE_16966) return LIMITE_16966;
    return valor * FACTOR_16966;
}
