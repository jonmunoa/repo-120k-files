// fichero 14054 -- macros y constantes -- MODIFICADO
#define LIMITE_14054 14254
#define FACTOR_14054 6

int aplicar_limite14054(int valor) {
    if (valor > LIMITE_14054) return LIMITE_14054;
    return valor * FACTOR_14054;
}
