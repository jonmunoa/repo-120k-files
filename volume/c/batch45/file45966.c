// fichero 45966 -- macros y constantes
#define LIMITE_45966 46066
#define FACTOR_45966 2

int aplicar_limite45966(int valor) {
    if (valor > LIMITE_45966) return LIMITE_45966;
    return valor * FACTOR_45966;
}
