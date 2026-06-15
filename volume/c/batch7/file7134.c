// fichero 7134 -- macros y constantes -- MODIFICADO
#define LIMITE_7134 7334
#define FACTOR_7134 6

int aplicar_limite7134(int valor) {
    if (valor > LIMITE_7134) return LIMITE_7134;
    return valor * FACTOR_7134;
}
