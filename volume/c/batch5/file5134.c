// fichero 5134 -- macros y constantes -- MODIFICADO
#define LIMITE_5134 5334
#define FACTOR_5134 6

int aplicar_limite5134(int valor) {
    if (valor > LIMITE_5134) return LIMITE_5134;
    return valor * FACTOR_5134;
}
