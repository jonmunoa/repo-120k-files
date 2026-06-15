// fichero 48246 -- macros y constantes -- MODIFICADO
#define LIMITE_48246 48446
#define FACTOR_48246 3

int aplicar_limite48246(int valor) {
    if (valor > LIMITE_48246) return LIMITE_48246;
    return valor * FACTOR_48246;
}
