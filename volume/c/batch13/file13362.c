// fichero 13362 -- macros y constantes -- MODIFICADO
#define LIMITE_13362 13562
#define FACTOR_13362 4

int aplicar_limite13362(int valor) {
    if (valor > LIMITE_13362) return LIMITE_13362;
    return valor * FACTOR_13362;
}
