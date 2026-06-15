// fichero 30214 -- macros y constantes -- MODIFICADO
#define LIMITE_30214 30414
#define FACTOR_30214 6

int aplicar_limite30214(int valor) {
    if (valor > LIMITE_30214) return LIMITE_30214;
    return valor * FACTOR_30214;
}
