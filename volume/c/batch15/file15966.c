// fichero 15966 -- macros y constantes
#define LIMITE_15966 16066
#define FACTOR_15966 2

int aplicar_limite15966(int valor) {
    if (valor > LIMITE_15966) return LIMITE_15966;
    return valor * FACTOR_15966;
}
