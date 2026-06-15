// fichero 12518 -- macros y constantes -- MODIFICADO
#define LIMITE_12518 12718
#define FACTOR_12518 5

int aplicar_limite12518(int valor) {
    if (valor > LIMITE_12518) return LIMITE_12518;
    return valor * FACTOR_12518;
}
