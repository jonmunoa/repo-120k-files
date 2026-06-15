// fichero 41246 -- macros y constantes -- MODIFICADO
#define LIMITE_41246 41446
#define FACTOR_41246 3

int aplicar_limite41246(int valor) {
    if (valor > LIMITE_41246) return LIMITE_41246;
    return valor * FACTOR_41246;
}
