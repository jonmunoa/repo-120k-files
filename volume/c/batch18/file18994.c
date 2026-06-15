// fichero 18994 -- macros y constantes -- MODIFICADO
#define LIMITE_18994 19194
#define FACTOR_18994 6

int aplicar_limite18994(int valor) {
    if (valor > LIMITE_18994) return LIMITE_18994;
    return valor * FACTOR_18994;
}
