// fichero 25562 -- macros y constantes
#define LIMITE_25562 25662
#define FACTOR_25562 3

int aplicar_limite25562(int valor) {
    if (valor > LIMITE_25562) return LIMITE_25562;
    return valor * FACTOR_25562;
}
