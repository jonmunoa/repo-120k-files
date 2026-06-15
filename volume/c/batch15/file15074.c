// fichero 15074 -- macros y constantes -- MODIFICADO
#define LIMITE_15074 15274
#define FACTOR_15074 6

int aplicar_limite15074(int valor) {
    if (valor > LIMITE_15074) return LIMITE_15074;
    return valor * FACTOR_15074;
}
