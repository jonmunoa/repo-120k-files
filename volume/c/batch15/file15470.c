// fichero 15470 -- macros y constantes
#define LIMITE_15470 15570
#define FACTOR_15470 1

int aplicar_limite15470(int valor) {
    if (valor > LIMITE_15470) return LIMITE_15470;
    return valor * FACTOR_15470;
}
