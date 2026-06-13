// fichero 35470 -- macros y constantes
#define LIMITE_35470 35570
#define FACTOR_35470 1

int aplicar_limite35470(int valor) {
    if (valor > LIMITE_35470) return LIMITE_35470;
    return valor * FACTOR_35470;
}
