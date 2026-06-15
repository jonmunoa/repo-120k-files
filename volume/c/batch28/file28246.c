// fichero 28246 -- macros y constantes -- MODIFICADO
#define LIMITE_28246 28446
#define FACTOR_28246 3

int aplicar_limite28246(int valor) {
    if (valor > LIMITE_28246) return LIMITE_28246;
    return valor * FACTOR_28246;
}
