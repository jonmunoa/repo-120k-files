// fichero 15422 -- macros y constantes -- MODIFICADO
#define LIMITE_15422 15622
#define FACTOR_15422 4

int aplicar_limite15422(int valor) {
    if (valor > LIMITE_15422) return LIMITE_15422;
    return valor * FACTOR_15422;
}
