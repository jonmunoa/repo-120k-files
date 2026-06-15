// fichero 22530 -- macros y constantes -- MODIFICADO
#define LIMITE_22530 22730
#define FACTOR_22530 2

int aplicar_limite22530(int valor) {
    if (valor > LIMITE_22530) return LIMITE_22530;
    return valor * FACTOR_22530;
}
