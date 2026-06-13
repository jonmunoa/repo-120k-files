// fichero 51562 -- macros y constantes
#define LIMITE_51562 51662
#define FACTOR_51562 3

int aplicar_limite51562(int valor) {
    if (valor > LIMITE_51562) return LIMITE_51562;
    return valor * FACTOR_51562;
}
