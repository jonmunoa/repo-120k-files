// fichero 22518 -- macros y constantes -- MODIFICADO
#define LIMITE_22518 22718
#define FACTOR_22518 5

int aplicar_limite22518(int valor) {
    if (valor > LIMITE_22518) return LIMITE_22518;
    return valor * FACTOR_22518;
}
