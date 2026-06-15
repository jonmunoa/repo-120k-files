// fichero 2374 -- macros y constantes -- MODIFICADO
#define LIMITE_2374 2574
#define FACTOR_2374 6

int aplicar_limite2374(int valor) {
    if (valor > LIMITE_2374) return LIMITE_2374;
    return valor * FACTOR_2374;
}
