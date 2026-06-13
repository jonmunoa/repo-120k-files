// fichero 36562 -- macros y constantes
#define LIMITE_36562 36662
#define FACTOR_36562 3

int aplicar_limite36562(int valor) {
    if (valor > LIMITE_36562) return LIMITE_36562;
    return valor * FACTOR_36562;
}
