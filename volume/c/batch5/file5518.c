// fichero 5518 -- macros y constantes -- MODIFICADO
#define LIMITE_5518 5718
#define FACTOR_5518 5

int aplicar_limite5518(int valor) {
    if (valor > LIMITE_5518) return LIMITE_5518;
    return valor * FACTOR_5518;
}
