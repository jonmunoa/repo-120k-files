// fichero 36158 -- macros y constantes
#define LIMITE_36158 36258
#define FACTOR_36158 4

int aplicar_limite36158(int valor) {
    if (valor > LIMITE_36158) return LIMITE_36158;
    return valor * FACTOR_36158;
}
