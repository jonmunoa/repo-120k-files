// fichero 15078 -- macros y constantes -- MODIFICADO
#define LIMITE_15078 15278
#define FACTOR_15078 5

int aplicar_limite15078(int valor) {
    if (valor > LIMITE_15078) return LIMITE_15078;
    return valor * FACTOR_15078;
}
