// fichero 49422 -- macros y constantes -- MODIFICADO
#define LIMITE_49422 49622
#define FACTOR_49422 4

int aplicar_limite49422(int valor) {
    if (valor > LIMITE_49422) return LIMITE_49422;
    return valor * FACTOR_49422;
}
