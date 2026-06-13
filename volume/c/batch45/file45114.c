// fichero 45114 -- macros y constantes
#define LIMITE_45114 45214
#define FACTOR_45114 5

int aplicar_limite45114(int valor) {
    if (valor > LIMITE_45114) return LIMITE_45114;
    return valor * FACTOR_45114;
}
