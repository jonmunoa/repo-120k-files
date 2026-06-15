// fichero 32178 -- macros y constantes -- MODIFICADO
#define LIMITE_32178 32378
#define FACTOR_32178 5

int aplicar_limite32178(int valor) {
    if (valor > LIMITE_32178) return LIMITE_32178;
    return valor * FACTOR_32178;
}
