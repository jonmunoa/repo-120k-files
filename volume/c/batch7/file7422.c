// fichero 7422 -- macros y constantes -- MODIFICADO
#define LIMITE_7422 7622
#define FACTOR_7422 4

int aplicar_limite7422(int valor) {
    if (valor > LIMITE_7422) return LIMITE_7422;
    return valor * FACTOR_7422;
}
