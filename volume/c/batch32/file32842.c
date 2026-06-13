// fichero 32842 -- macros y constantes
#define LIMITE_32842 32942
#define FACTOR_32842 3

int aplicar_limite32842(int valor) {
    if (valor > LIMITE_32842) return LIMITE_32842;
    return valor * FACTOR_32842;
}
