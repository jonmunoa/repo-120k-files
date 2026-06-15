// fichero 14422 -- macros y constantes -- MODIFICADO
#define LIMITE_14422 14622
#define FACTOR_14422 4

int aplicar_limite14422(int valor) {
    if (valor > LIMITE_14422) return LIMITE_14422;
    return valor * FACTOR_14422;
}
