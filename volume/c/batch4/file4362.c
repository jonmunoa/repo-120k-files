// fichero 4362 -- macros y constantes -- MODIFICADO
#define LIMITE_4362 4562
#define FACTOR_4362 4

int aplicar_limite4362(int valor) {
    if (valor > LIMITE_4362) return LIMITE_4362;
    return valor * FACTOR_4362;
}
