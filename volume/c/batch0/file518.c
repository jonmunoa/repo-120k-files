// fichero 518 -- macros y constantes -- MODIFICADO
#define LIMITE_518 718
#define FACTOR_518 5

int aplicar_limite518(int valor) {
    if (valor > LIMITE_518) return LIMITE_518;
    return valor * FACTOR_518;
}
