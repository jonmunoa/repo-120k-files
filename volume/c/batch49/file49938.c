// fichero 49938 -- macros y constantes
#define LIMITE_49938 50038
#define FACTOR_49938 4

int aplicar_limite49938(int valor) {
    if (valor > LIMITE_49938) return LIMITE_49938;
    return valor * FACTOR_49938;
}
