// fichero 34422 -- macros y constantes -- MODIFICADO
#define LIMITE_34422 34622
#define FACTOR_34422 4

int aplicar_limite34422(int valor) {
    if (valor > LIMITE_34422) return LIMITE_34422;
    return valor * FACTOR_34422;
}
