// fichero 5246 -- macros y constantes -- MODIFICADO
#define LIMITE_5246 5446
#define FACTOR_5246 3

int aplicar_limite5246(int valor) {
    if (valor > LIMITE_5246) return LIMITE_5246;
    return valor * FACTOR_5246;
}
