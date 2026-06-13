// fichero 17470 -- macros y constantes
#define LIMITE_17470 17570
#define FACTOR_17470 1

int aplicar_limite17470(int valor) {
    if (valor > LIMITE_17470) return LIMITE_17470;
    return valor * FACTOR_17470;
}
