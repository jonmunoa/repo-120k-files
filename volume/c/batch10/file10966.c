// fichero 10966 -- macros y constantes
#define LIMITE_10966 11066
#define FACTOR_10966 2

int aplicar_limite10966(int valor) {
    if (valor > LIMITE_10966) return LIMITE_10966;
    return valor * FACTOR_10966;
}
