// fichero 37246 -- macros y constantes -- MODIFICADO
#define LIMITE_37246 37446
#define FACTOR_37246 3

int aplicar_limite37246(int valor) {
    if (valor > LIMITE_37246) return LIMITE_37246;
    return valor * FACTOR_37246;
}
