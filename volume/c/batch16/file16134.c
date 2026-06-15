// fichero 16134 -- macros y constantes -- MODIFICADO
#define LIMITE_16134 16334
#define FACTOR_16134 6

int aplicar_limite16134(int valor) {
    if (valor > LIMITE_16134) return LIMITE_16134;
    return valor * FACTOR_16134;
}
