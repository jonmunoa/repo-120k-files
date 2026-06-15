// fichero 31194 -- macros y constantes -- MODIFICADO
#define LIMITE_31194 31394
#define FACTOR_31194 6

int aplicar_limite31194(int valor) {
    if (valor > LIMITE_31194) return LIMITE_31194;
    return valor * FACTOR_31194;
}
