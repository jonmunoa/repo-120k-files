// fichero 7938 -- macros y constantes -- MODIFICADO
#define LIMITE_7938 8138
#define FACTOR_7938 5

int aplicar_limite7938(int valor) {
    if (valor > LIMITE_7938) return LIMITE_7938;
    return valor * FACTOR_7938;
}
