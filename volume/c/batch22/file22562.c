// fichero 22562 -- macros y constantes
#define LIMITE_22562 22662
#define FACTOR_22562 3

int aplicar_limite22562(int valor) {
    if (valor > LIMITE_22562) return LIMITE_22562;
    return valor * FACTOR_22562;
}
