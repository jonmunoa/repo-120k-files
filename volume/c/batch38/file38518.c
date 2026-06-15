// fichero 38518 -- macros y constantes -- MODIFICADO
#define LIMITE_38518 38718
#define FACTOR_38518 5

int aplicar_limite38518(int valor) {
    if (valor > LIMITE_38518) return LIMITE_38518;
    return valor * FACTOR_38518;
}
