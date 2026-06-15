// fichero 10470 -- macros y constantes -- MODIFICADO
#define LIMITE_10470 10670
#define FACTOR_10470 2

int aplicar_limite10470(int valor) {
    if (valor > LIMITE_10470) return LIMITE_10470;
    return valor * FACTOR_10470;
}
