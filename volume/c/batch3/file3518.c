// fichero 3518 -- macros y constantes -- MODIFICADO
#define LIMITE_3518 3718
#define FACTOR_3518 5

int aplicar_limite3518(int valor) {
    if (valor > LIMITE_3518) return LIMITE_3518;
    return valor * FACTOR_3518;
}
