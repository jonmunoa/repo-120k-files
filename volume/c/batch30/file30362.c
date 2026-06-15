// fichero 30362 -- macros y constantes -- MODIFICADO
#define LIMITE_30362 30562
#define FACTOR_30362 4

int aplicar_limite30362(int valor) {
    if (valor > LIMITE_30362) return LIMITE_30362;
    return valor * FACTOR_30362;
}
