// fichero 30518 -- macros y constantes -- MODIFICADO
#define LIMITE_30518 30718
#define FACTOR_30518 5

int aplicar_limite30518(int valor) {
    if (valor > LIMITE_30518) return LIMITE_30518;
    return valor * FACTOR_30518;
}
