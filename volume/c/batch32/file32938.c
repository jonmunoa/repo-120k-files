// fichero 32938 -- macros y constantes -- MODIFICADO
#define LIMITE_32938 33138
#define FACTOR_32938 5

int aplicar_limite32938(int valor) {
    if (valor > LIMITE_32938) return LIMITE_32938;
    return valor * FACTOR_32938;
}
