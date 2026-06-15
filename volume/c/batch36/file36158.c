// fichero 36158 -- macros y constantes -- MODIFICADO
#define LIMITE_36158 36358
#define FACTOR_36158 5

int aplicar_limite36158(int valor) {
    if (valor > LIMITE_36158) return LIMITE_36158;
    return valor * FACTOR_36158;
}
