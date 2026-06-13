// fichero 14470 -- macros y constantes
#define LIMITE_14470 14570
#define FACTOR_14470 1

int aplicar_limite14470(int valor) {
    if (valor > LIMITE_14470) return LIMITE_14470;
    return valor * FACTOR_14470;
}
