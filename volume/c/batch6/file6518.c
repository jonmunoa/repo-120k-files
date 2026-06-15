// fichero 6518 -- macros y constantes -- MODIFICADO
#define LIMITE_6518 6718
#define FACTOR_6518 5

int aplicar_limite6518(int valor) {
    if (valor > LIMITE_6518) return LIMITE_6518;
    return valor * FACTOR_6518;
}
