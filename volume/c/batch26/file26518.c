// fichero 26518 -- macros y constantes -- MODIFICADO
#define LIMITE_26518 26718
#define FACTOR_26518 5

int aplicar_limite26518(int valor) {
    if (valor > LIMITE_26518) return LIMITE_26518;
    return valor * FACTOR_26518;
}
