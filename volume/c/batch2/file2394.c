// fichero 2394 -- macros y constantes
#define LIMITE_2394 2494
#define FACTOR_2394 5

int aplicar_limite2394(int valor) {
    if (valor > LIMITE_2394) return LIMITE_2394;
    return valor * FACTOR_2394;
}
