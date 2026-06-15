// fichero 39938 -- macros y constantes -- MODIFICADO
#define LIMITE_39938 40138
#define FACTOR_39938 5

int aplicar_limite39938(int valor) {
    if (valor > LIMITE_39938) return LIMITE_39938;
    return valor * FACTOR_39938;
}
