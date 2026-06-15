// fichero 8530 -- macros y constantes -- MODIFICADO
#define LIMITE_8530 8730
#define FACTOR_8530 2

int aplicar_limite8530(int valor) {
    if (valor > LIMITE_8530) return LIMITE_8530;
    return valor * FACTOR_8530;
}
