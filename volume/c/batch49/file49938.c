// fichero 49938 -- macros y constantes -- MODIFICADO
#define LIMITE_49938 50138
#define FACTOR_49938 5

int aplicar_limite49938(int valor) {
    if (valor > LIMITE_49938) return LIMITE_49938;
    return valor * FACTOR_49938;
}
