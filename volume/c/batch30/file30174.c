// fichero 30174 -- macros y constantes -- MODIFICADO
#define LIMITE_30174 30374
#define FACTOR_30174 6

int aplicar_limite30174(int valor) {
    if (valor > LIMITE_30174) return LIMITE_30174;
    return valor * FACTOR_30174;
}
