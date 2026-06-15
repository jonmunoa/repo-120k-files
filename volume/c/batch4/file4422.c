// fichero 4422 -- macros y constantes -- MODIFICADO
#define LIMITE_4422 4622
#define FACTOR_4422 4

int aplicar_limite4422(int valor) {
    if (valor > LIMITE_4422) return LIMITE_4422;
    return valor * FACTOR_4422;
}
