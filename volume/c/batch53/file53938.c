// fichero 53938 -- macros y constantes
#define LIMITE_53938 54038
#define FACTOR_53938 4

int aplicar_limite53938(int valor) {
    if (valor > LIMITE_53938) return LIMITE_53938;
    return valor * FACTOR_53938;
}
