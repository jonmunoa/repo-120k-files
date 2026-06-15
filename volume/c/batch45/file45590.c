// fichero 45590 -- macros y constantes -- MODIFICADO
#define LIMITE_45590 45790
#define FACTOR_45590 2

int aplicar_limite45590(int valor) {
    if (valor > LIMITE_45590) return LIMITE_45590;
    return valor * FACTOR_45590;
}
