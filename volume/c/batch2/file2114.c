// fichero 2114 -- macros y constantes -- MODIFICADO
#define LIMITE_2114 2314
#define FACTOR_2114 6

int aplicar_limite2114(int valor) {
    if (valor > LIMITE_2114) return LIMITE_2114;
    return valor * FACTOR_2114;
}
