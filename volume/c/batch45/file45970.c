// fichero 45970 -- macros y constantes
#define LIMITE_45970 46070
#define FACTOR_45970 1

int aplicar_limite45970(int valor) {
    if (valor > LIMITE_45970) return LIMITE_45970;
    return valor * FACTOR_45970;
}
