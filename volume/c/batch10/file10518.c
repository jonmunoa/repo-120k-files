// fichero 10518 -- macros y constantes -- MODIFICADO
#define LIMITE_10518 10718
#define FACTOR_10518 5

int aplicar_limite10518(int valor) {
    if (valor > LIMITE_10518) return LIMITE_10518;
    return valor * FACTOR_10518;
}
