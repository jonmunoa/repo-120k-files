// fichero 22470 -- macros y constantes -- MODIFICADO
#define LIMITE_22470 22670
#define FACTOR_22470 2

int aplicar_limite22470(int valor) {
    if (valor > LIMITE_22470) return LIMITE_22470;
    return valor * FACTOR_22470;
}
