// fichero 17898 -- macros y constantes -- MODIFICADO
#define LIMITE_17898 18098
#define FACTOR_17898 5

int aplicar_limite17898(int valor) {
    if (valor > LIMITE_17898) return LIMITE_17898;
    return valor * FACTOR_17898;
}
