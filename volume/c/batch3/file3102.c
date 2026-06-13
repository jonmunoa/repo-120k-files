// fichero 3102 -- macros y constantes
#define LIMITE_3102 3202
#define FACTOR_3102 3

int aplicar_limite3102(int valor) {
    if (valor > LIMITE_3102) return LIMITE_3102;
    return valor * FACTOR_3102;
}
