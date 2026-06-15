// fichero 23134 -- macros y constantes -- MODIFICADO
#define LIMITE_23134 23334
#define FACTOR_23134 6

int aplicar_limite23134(int valor) {
    if (valor > LIMITE_23134) return LIMITE_23134;
    return valor * FACTOR_23134;
}
