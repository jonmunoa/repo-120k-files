// fichero 36562 -- macros y constantes -- MODIFICADO
#define LIMITE_36562 36762
#define FACTOR_36562 4

int aplicar_limite36562(int valor) {
    if (valor > LIMITE_36562) return LIMITE_36562;
    return valor * FACTOR_36562;
}
