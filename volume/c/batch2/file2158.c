// fichero 2158 -- macros y constantes
#define LIMITE_2158 2258
#define FACTOR_2158 4

int aplicar_limite2158(int valor) {
    if (valor > LIMITE_2158) return LIMITE_2158;
    return valor * FACTOR_2158;
}
