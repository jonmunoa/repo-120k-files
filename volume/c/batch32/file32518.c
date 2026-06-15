// fichero 32518 -- macros y constantes -- MODIFICADO
#define LIMITE_32518 32718
#define FACTOR_32518 5

int aplicar_limite32518(int valor) {
    if (valor > LIMITE_32518) return LIMITE_32518;
    return valor * FACTOR_32518;
}
