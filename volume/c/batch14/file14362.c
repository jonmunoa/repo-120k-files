// fichero 14362 -- macros y constantes -- MODIFICADO
#define LIMITE_14362 14562
#define FACTOR_14362 4

int aplicar_limite14362(int valor) {
    if (valor > LIMITE_14362) return LIMITE_14362;
    return valor * FACTOR_14362;
}
