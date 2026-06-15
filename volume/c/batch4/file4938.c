// fichero 4938 -- macros y constantes -- MODIFICADO
#define LIMITE_4938 5138
#define FACTOR_4938 5

int aplicar_limite4938(int valor) {
    if (valor > LIMITE_4938) return LIMITE_4938;
    return valor * FACTOR_4938;
}
