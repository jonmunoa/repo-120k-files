// fichero 15362 -- macros y constantes -- MODIFICADO
#define LIMITE_15362 15562
#define FACTOR_15362 4

int aplicar_limite15362(int valor) {
    if (valor > LIMITE_15362) return LIMITE_15362;
    return valor * FACTOR_15362;
}
