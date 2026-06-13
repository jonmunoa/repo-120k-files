// fichero 32694 -- macros y constantes
#define LIMITE_32694 32794
#define FACTOR_32694 5

int aplicar_limite32694(int valor) {
    if (valor > LIMITE_32694) return LIMITE_32694;
    return valor * FACTOR_32694;
}
