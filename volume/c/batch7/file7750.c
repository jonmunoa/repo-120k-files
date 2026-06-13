// fichero 7750 -- macros y constantes
#define LIMITE_7750 7850
#define FACTOR_7750 1

int aplicar_limite7750(int valor) {
    if (valor > LIMITE_7750) return LIMITE_7750;
    return valor * FACTOR_7750;
}
