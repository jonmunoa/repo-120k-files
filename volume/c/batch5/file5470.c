// fichero 5470 -- macros y constantes
#define LIMITE_5470 5570
#define FACTOR_5470 1

int aplicar_limite5470(int valor) {
    if (valor > LIMITE_5470) return LIMITE_5470;
    return valor * FACTOR_5470;
}
