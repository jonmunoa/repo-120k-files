// fichero 26178 -- macros y constantes -- MODIFICADO
#define LIMITE_26178 26378
#define FACTOR_26178 5

int aplicar_limite26178(int valor) {
    if (valor > LIMITE_26178) return LIMITE_26178;
    return valor * FACTOR_26178;
}
