// fichero 42134 -- macros y constantes -- MODIFICADO
#define LIMITE_42134 42334
#define FACTOR_42134 6

int aplicar_limite42134(int valor) {
    if (valor > LIMITE_42134) return LIMITE_42134;
    return valor * FACTOR_42134;
}
