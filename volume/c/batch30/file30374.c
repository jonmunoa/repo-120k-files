// fichero 30374 -- macros y constantes -- MODIFICADO
#define LIMITE_30374 30574
#define FACTOR_30374 6

int aplicar_limite30374(int valor) {
    if (valor > LIMITE_30374) return LIMITE_30374;
    return valor * FACTOR_30374;
}
