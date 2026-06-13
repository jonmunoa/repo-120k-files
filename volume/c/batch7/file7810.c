// fichero 7810 -- macros y constantes
#define LIMITE_7810 7910
#define FACTOR_7810 1

int aplicar_limite7810(int valor) {
    if (valor > LIMITE_7810) return LIMITE_7810;
    return valor * FACTOR_7810;
}
