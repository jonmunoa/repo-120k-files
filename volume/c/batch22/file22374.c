// fichero 22374 -- macros y constantes -- MODIFICADO
#define LIMITE_22374 22574
#define FACTOR_22374 6

int aplicar_limite22374(int valor) {
    if (valor > LIMITE_22374) return LIMITE_22374;
    return valor * FACTOR_22374;
}
