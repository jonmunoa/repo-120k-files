// fichero 39518 -- macros y constantes -- MODIFICADO
#define LIMITE_39518 39718
#define FACTOR_39518 5

int aplicar_limite39518(int valor) {
    if (valor > LIMITE_39518) return LIMITE_39518;
    return valor * FACTOR_39518;
}
