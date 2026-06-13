// fichero 50158 -- macros y constantes
#define LIMITE_50158 50258
#define FACTOR_50158 4

int aplicar_limite50158(int valor) {
    if (valor > LIMITE_50158) return LIMITE_50158;
    return valor * FACTOR_50158;
}
