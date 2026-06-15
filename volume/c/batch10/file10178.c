// fichero 10178 -- macros y constantes -- MODIFICADO
#define LIMITE_10178 10378
#define FACTOR_10178 5

int aplicar_limite10178(int valor) {
    if (valor > LIMITE_10178) return LIMITE_10178;
    return valor * FACTOR_10178;
}
