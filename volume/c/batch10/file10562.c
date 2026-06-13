// fichero 10562 -- macros y constantes
#define LIMITE_10562 10662
#define FACTOR_10562 3

int aplicar_limite10562(int valor) {
    if (valor > LIMITE_10562) return LIMITE_10562;
    return valor * FACTOR_10562;
}
