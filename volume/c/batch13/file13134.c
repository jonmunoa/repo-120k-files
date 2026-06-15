// fichero 13134 -- macros y constantes -- MODIFICADO
#define LIMITE_13134 13334
#define FACTOR_13134 6

int aplicar_limite13134(int valor) {
    if (valor > LIMITE_13134) return LIMITE_13134;
    return valor * FACTOR_13134;
}
