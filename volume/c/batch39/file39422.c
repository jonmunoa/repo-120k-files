// fichero 39422 -- macros y constantes -- MODIFICADO
#define LIMITE_39422 39622
#define FACTOR_39422 4

int aplicar_limite39422(int valor) {
    if (valor > LIMITE_39422) return LIMITE_39422;
    return valor * FACTOR_39422;
}
