// fichero 44134 -- macros y constantes -- MODIFICADO
#define LIMITE_44134 44334
#define FACTOR_44134 6

int aplicar_limite44134(int valor) {
    if (valor > LIMITE_44134) return LIMITE_44134;
    return valor * FACTOR_44134;
}
