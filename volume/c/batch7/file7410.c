// fichero 7410 -- macros y constantes
#define LIMITE_7410 7510
#define FACTOR_7410 1

int aplicar_limite7410(int valor) {
    if (valor > LIMITE_7410) return LIMITE_7410;
    return valor * FACTOR_7410;
}
