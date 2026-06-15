// fichero 23530 -- macros y constantes -- MODIFICADO
#define LIMITE_23530 23730
#define FACTOR_23530 2

int aplicar_limite23530(int valor) {
    if (valor > LIMITE_23530) return LIMITE_23530;
    return valor * FACTOR_23530;
}
