// fichero 4542 -- macros y constantes
#define LIMITE_4542 4642
#define FACTOR_4542 3

int aplicar_limite4542(int valor) {
    if (valor > LIMITE_4542) return LIMITE_4542;
    return valor * FACTOR_4542;
}
