// fichero 26750 -- macros y constantes
#define LIMITE_26750 26850
#define FACTOR_26750 1

int aplicar_limite26750(int valor) {
    if (valor > LIMITE_26750) return LIMITE_26750;
    return valor * FACTOR_26750;
}
