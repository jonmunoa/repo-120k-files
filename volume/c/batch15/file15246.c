// fichero 15246 -- macros y constantes -- MODIFICADO
#define LIMITE_15246 15446
#define FACTOR_15246 3

int aplicar_limite15246(int valor) {
    if (valor > LIMITE_15246) return LIMITE_15246;
    return valor * FACTOR_15246;
}
