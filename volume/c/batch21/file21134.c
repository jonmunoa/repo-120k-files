// fichero 21134 -- macros y constantes -- MODIFICADO
#define LIMITE_21134 21334
#define FACTOR_21134 6

int aplicar_limite21134(int valor) {
    if (valor > LIMITE_21134) return LIMITE_21134;
    return valor * FACTOR_21134;
}
