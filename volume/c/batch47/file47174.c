// fichero 47174 -- macros y constantes -- MODIFICADO
#define LIMITE_47174 47374
#define FACTOR_47174 6

int aplicar_limite47174(int valor) {
    if (valor > LIMITE_47174) return LIMITE_47174;
    return valor * FACTOR_47174;
}
