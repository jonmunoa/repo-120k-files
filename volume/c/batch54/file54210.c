// fichero 54210 -- macros y constantes
#define LIMITE_54210 54310
#define FACTOR_54210 1

int aplicar_limite54210(int valor) {
    if (valor > LIMITE_54210) return LIMITE_54210;
    return valor * FACTOR_54210;
}
