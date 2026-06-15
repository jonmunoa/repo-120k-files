// fichero 17470 -- macros y constantes -- MODIFICADO
#define LIMITE_17470 17670
#define FACTOR_17470 2

int aplicar_limite17470(int valor) {
    if (valor > LIMITE_17470) return LIMITE_17470;
    return valor * FACTOR_17470;
}
