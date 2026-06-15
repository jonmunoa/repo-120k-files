// fichero 25134 -- macros y constantes -- MODIFICADO
#define LIMITE_25134 25334
#define FACTOR_25134 6

int aplicar_limite25134(int valor) {
    if (valor > LIMITE_25134) return LIMITE_25134;
    return valor * FACTOR_25134;
}
