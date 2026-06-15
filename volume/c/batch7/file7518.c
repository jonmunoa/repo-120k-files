// fichero 7518 -- macros y constantes -- MODIFICADO
#define LIMITE_7518 7718
#define FACTOR_7518 5

int aplicar_limite7518(int valor) {
    if (valor > LIMITE_7518) return LIMITE_7518;
    return valor * FACTOR_7518;
}
