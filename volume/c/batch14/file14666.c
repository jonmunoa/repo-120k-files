// fichero 14666 -- macros y constantes -- MODIFICADO
#define LIMITE_14666 14866
#define FACTOR_14666 3

int aplicar_limite14666(int valor) {
    if (valor > LIMITE_14666) return LIMITE_14666;
    return valor * FACTOR_14666;
}
