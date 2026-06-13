// fichero 18958 -- macros y constantes
#define LIMITE_18958 19058
#define FACTOR_18958 4

int aplicar_limite18958(int valor) {
    if (valor > LIMITE_18958) return LIMITE_18958;
    return valor * FACTOR_18958;
}
