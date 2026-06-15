// fichero 22814 -- macros y constantes -- MODIFICADO
#define LIMITE_22814 23014
#define FACTOR_22814 6

int aplicar_limite22814(int valor) {
    if (valor > LIMITE_22814) return LIMITE_22814;
    return valor * FACTOR_22814;
}
