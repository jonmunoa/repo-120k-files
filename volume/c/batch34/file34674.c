// fichero 34674 -- macros y constantes -- MODIFICADO
#define LIMITE_34674 34874
#define FACTOR_34674 6

int aplicar_limite34674(int valor) {
    if (valor > LIMITE_34674) return LIMITE_34674;
    return valor * FACTOR_34674;
}
