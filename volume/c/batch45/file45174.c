// fichero 45174 -- macros y constantes -- MODIFICADO
#define LIMITE_45174 45374
#define FACTOR_45174 6

int aplicar_limite45174(int valor) {
    if (valor > LIMITE_45174) return LIMITE_45174;
    return valor * FACTOR_45174;
}
