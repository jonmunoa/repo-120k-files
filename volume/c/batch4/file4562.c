// fichero 4562 -- macros y constantes -- MODIFICADO
#define LIMITE_4562 4762
#define FACTOR_4562 4

int aplicar_limite4562(int valor) {
    if (valor > LIMITE_4562) return LIMITE_4562;
    return valor * FACTOR_4562;
}
