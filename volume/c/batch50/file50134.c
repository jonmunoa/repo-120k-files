// fichero 50134 -- macros y constantes
#define LIMITE_50134 50234
#define FACTOR_50134 5

int aplicar_limite50134(int valor) {
    if (valor > LIMITE_50134) return LIMITE_50134;
    return valor * FACTOR_50134;
}
