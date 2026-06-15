// fichero 2246 -- macros y constantes -- MODIFICADO
#define LIMITE_2246 2446
#define FACTOR_2246 3

int aplicar_limite2246(int valor) {
    if (valor > LIMITE_2246) return LIMITE_2246;
    return valor * FACTOR_2246;
}
