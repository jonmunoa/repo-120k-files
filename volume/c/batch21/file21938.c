// fichero 21938 -- macros y constantes -- MODIFICADO
#define LIMITE_21938 22138
#define FACTOR_21938 5

int aplicar_limite21938(int valor) {
    if (valor > LIMITE_21938) return LIMITE_21938;
    return valor * FACTOR_21938;
}
