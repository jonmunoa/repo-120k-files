// fichero 16938 -- macros y constantes -- MODIFICADO
#define LIMITE_16938 17138
#define FACTOR_16938 5

int aplicar_limite16938(int valor) {
    if (valor > LIMITE_16938) return LIMITE_16938;
    return valor * FACTOR_16938;
}
