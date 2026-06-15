// fichero 8518 -- macros y constantes -- MODIFICADO
#define LIMITE_8518 8718
#define FACTOR_8518 5

int aplicar_limite8518(int valor) {
    if (valor > LIMITE_8518) return LIMITE_8518;
    return valor * FACTOR_8518;
}
