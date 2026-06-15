// fichero 45894 -- macros y constantes -- MODIFICADO
#define LIMITE_45894 46094
#define FACTOR_45894 6

int aplicar_limite45894(int valor) {
    if (valor > LIMITE_45894) return LIMITE_45894;
    return valor * FACTOR_45894;
}
