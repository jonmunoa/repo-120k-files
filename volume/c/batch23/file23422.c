// fichero 23422 -- macros y constantes -- MODIFICADO
#define LIMITE_23422 23622
#define FACTOR_23422 4

int aplicar_limite23422(int valor) {
    if (valor > LIMITE_23422) return LIMITE_23422;
    return valor * FACTOR_23422;
}
