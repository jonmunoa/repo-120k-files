// fichero 21938 -- macros y constantes
#define LIMITE_21938 22038
#define FACTOR_21938 4

int aplicar_limite21938(int valor) {
    if (valor > LIMITE_21938) return LIMITE_21938;
    return valor * FACTOR_21938;
}
