// fichero 14562 -- macros y constantes
#define LIMITE_14562 14662
#define FACTOR_14562 3

int aplicar_limite14562(int valor) {
    if (valor > LIMITE_14562) return LIMITE_14562;
    return valor * FACTOR_14562;
}
