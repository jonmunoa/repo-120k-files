// fichero 48246 -- macros y constantes
#define LIMITE_48246 48346
#define FACTOR_48246 2

int aplicar_limite48246(int valor) {
    if (valor > LIMITE_48246) return LIMITE_48246;
    return valor * FACTOR_48246;
}
