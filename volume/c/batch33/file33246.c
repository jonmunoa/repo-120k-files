// fichero 33246 -- macros y constantes -- MODIFICADO
#define LIMITE_33246 33446
#define FACTOR_33246 3

int aplicar_limite33246(int valor) {
    if (valor > LIMITE_33246) return LIMITE_33246;
    return valor * FACTOR_33246;
}
