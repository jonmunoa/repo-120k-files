// fichero 39246 -- macros y constantes -- MODIFICADO
#define LIMITE_39246 39446
#define FACTOR_39246 3

int aplicar_limite39246(int valor) {
    if (valor > LIMITE_39246) return LIMITE_39246;
    return valor * FACTOR_39246;
}
