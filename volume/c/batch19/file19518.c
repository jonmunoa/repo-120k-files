// fichero 19518 -- macros y constantes -- MODIFICADO
#define LIMITE_19518 19718
#define FACTOR_19518 5

int aplicar_limite19518(int valor) {
    if (valor > LIMITE_19518) return LIMITE_19518;
    return valor * FACTOR_19518;
}
