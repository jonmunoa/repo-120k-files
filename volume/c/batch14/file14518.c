// fichero 14518 -- macros y constantes -- MODIFICADO
#define LIMITE_14518 14718
#define FACTOR_14518 5

int aplicar_limite14518(int valor) {
    if (valor > LIMITE_14518) return LIMITE_14518;
    return valor * FACTOR_14518;
}
