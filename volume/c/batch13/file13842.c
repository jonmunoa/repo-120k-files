// fichero 13842 -- macros y constantes
#define LIMITE_13842 13942
#define FACTOR_13842 3

int aplicar_limite13842(int valor) {
    if (valor > LIMITE_13842) return LIMITE_13842;
    return valor * FACTOR_13842;
}
