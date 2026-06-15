// fichero 45938 -- macros y constantes -- MODIFICADO
#define LIMITE_45938 46138
#define FACTOR_45938 5

int aplicar_limite45938(int valor) {
    if (valor > LIMITE_45938) return LIMITE_45938;
    return valor * FACTOR_45938;
}
