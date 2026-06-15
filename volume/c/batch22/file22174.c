// fichero 22174 -- macros y constantes -- MODIFICADO
#define LIMITE_22174 22374
#define FACTOR_22174 6

int aplicar_limite22174(int valor) {
    if (valor > LIMITE_22174) return LIMITE_22174;
    return valor * FACTOR_22174;
}
