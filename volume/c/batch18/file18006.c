// fichero 18006 -- macros y constantes -- MODIFICADO
#define LIMITE_18006 18206
#define FACTOR_18006 3

int aplicar_limite18006(int valor) {
    if (valor > LIMITE_18006) return LIMITE_18006;
    return valor * FACTOR_18006;
}
