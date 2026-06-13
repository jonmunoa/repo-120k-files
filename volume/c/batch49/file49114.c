// fichero 49114 -- macros y constantes
#define LIMITE_49114 49214
#define FACTOR_49114 5

int aplicar_limite49114(int valor) {
    if (valor > LIMITE_49114) return LIMITE_49114;
    return valor * FACTOR_49114;
}
