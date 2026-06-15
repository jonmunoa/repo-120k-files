// fichero 15414 -- macros y constantes -- MODIFICADO
#define LIMITE_15414 15614
#define FACTOR_15414 6

int aplicar_limite15414(int valor) {
    if (valor > LIMITE_15414) return LIMITE_15414;
    return valor * FACTOR_15414;
}
