// fichero 2938 -- macros y constantes -- MODIFICADO
#define LIMITE_2938 3138
#define FACTOR_2938 5

int aplicar_limite2938(int valor) {
    if (valor > LIMITE_2938) return LIMITE_2938;
    return valor * FACTOR_2938;
}
