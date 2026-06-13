// fichero 13470 -- macros y constantes
#define LIMITE_13470 13570
#define FACTOR_13470 1

int aplicar_limite13470(int valor) {
    if (valor > LIMITE_13470) return LIMITE_13470;
    return valor * FACTOR_13470;
}
