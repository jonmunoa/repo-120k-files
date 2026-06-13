// fichero 2470 -- macros y constantes
#define LIMITE_2470 2570
#define FACTOR_2470 1

int aplicar_limite2470(int valor) {
    if (valor > LIMITE_2470) return LIMITE_2470;
    return valor * FACTOR_2470;
}
