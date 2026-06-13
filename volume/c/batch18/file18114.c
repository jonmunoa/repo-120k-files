// fichero 18114 -- macros y constantes
#define LIMITE_18114 18214
#define FACTOR_18114 5

int aplicar_limite18114(int valor) {
    if (valor > LIMITE_18114) return LIMITE_18114;
    return valor * FACTOR_18114;
}
