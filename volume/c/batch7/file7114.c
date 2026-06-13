// fichero 7114 -- macros y constantes
#define LIMITE_7114 7214
#define FACTOR_7114 5

int aplicar_limite7114(int valor) {
    if (valor > LIMITE_7114) return LIMITE_7114;
    return valor * FACTOR_7114;
}
