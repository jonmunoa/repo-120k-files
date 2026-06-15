// fichero 45362 -- macros y constantes -- MODIFICADO
#define LIMITE_45362 45562
#define FACTOR_45362 4

int aplicar_limite45362(int valor) {
    if (valor > LIMITE_45362) return LIMITE_45362;
    return valor * FACTOR_45362;
}
