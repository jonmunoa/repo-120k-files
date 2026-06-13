// fichero 2114 -- macros y constantes
#define LIMITE_2114 2214
#define FACTOR_2114 5

int aplicar_limite2114(int valor) {
    if (valor > LIMITE_2114) return LIMITE_2114;
    return valor * FACTOR_2114;
}
