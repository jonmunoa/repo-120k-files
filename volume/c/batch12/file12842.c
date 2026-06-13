// fichero 12842 -- macros y constantes
#define LIMITE_12842 12942
#define FACTOR_12842 3

int aplicar_limite12842(int valor) {
    if (valor > LIMITE_12842) return LIMITE_12842;
    return valor * FACTOR_12842;
}
