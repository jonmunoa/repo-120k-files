// fichero 36362 -- macros y constantes -- MODIFICADO
#define LIMITE_36362 36562
#define FACTOR_36362 4

int aplicar_limite36362(int valor) {
    if (valor > LIMITE_36362) return LIMITE_36362;
    return valor * FACTOR_36362;
}
