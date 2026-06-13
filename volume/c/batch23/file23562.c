// fichero 23562 -- macros y constantes
#define LIMITE_23562 23662
#define FACTOR_23562 3

int aplicar_limite23562(int valor) {
    if (valor > LIMITE_23562) return LIMITE_23562;
    return valor * FACTOR_23562;
}
