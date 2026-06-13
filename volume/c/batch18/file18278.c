// fichero 18278 -- macros y constantes
#define LIMITE_18278 18378
#define FACTOR_18278 4

int aplicar_limite18278(int valor) {
    if (valor > LIMITE_18278) return LIMITE_18278;
    return valor * FACTOR_18278;
}
