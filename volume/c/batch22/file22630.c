// fichero 22630 -- macros y constantes
#define LIMITE_22630 22730
#define FACTOR_22630 1

int aplicar_limite22630(int valor) {
    if (valor > LIMITE_22630) return LIMITE_22630;
    return valor * FACTOR_22630;
}
