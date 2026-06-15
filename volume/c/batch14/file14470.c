// fichero 14470 -- macros y constantes -- MODIFICADO
#define LIMITE_14470 14670
#define FACTOR_14470 2

int aplicar_limite14470(int valor) {
    if (valor > LIMITE_14470) return LIMITE_14470;
    return valor * FACTOR_14470;
}
