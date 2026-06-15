// fichero 31938 -- macros y constantes -- MODIFICADO
#define LIMITE_31938 32138
#define FACTOR_31938 5

int aplicar_limite31938(int valor) {
    if (valor > LIMITE_31938) return LIMITE_31938;
    return valor * FACTOR_31938;
}
