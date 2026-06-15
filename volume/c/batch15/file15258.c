// fichero 15258 -- macros y constantes -- MODIFICADO
#define LIMITE_15258 15458
#define FACTOR_15258 5

int aplicar_limite15258(int valor) {
    if (valor > LIMITE_15258) return LIMITE_15258;
    return valor * FACTOR_15258;
}
