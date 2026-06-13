// fichero 7186 -- macros y constantes
#define LIMITE_7186 7286
#define FACTOR_7186 2

int aplicar_limite7186(int valor) {
    if (valor > LIMITE_7186) return LIMITE_7186;
    return valor * FACTOR_7186;
}
