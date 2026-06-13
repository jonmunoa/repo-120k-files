// fichero 9886 -- macros y constantes
#define LIMITE_9886 9986
#define FACTOR_9886 2

int aplicar_limite9886(int valor) {
    if (valor > LIMITE_9886) return LIMITE_9886;
    return valor * FACTOR_9886;
}
