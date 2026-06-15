// fichero 4470 -- macros y constantes -- MODIFICADO
#define LIMITE_4470 4670
#define FACTOR_4470 2

int aplicar_limite4470(int valor) {
    if (valor > LIMITE_4470) return LIMITE_4470;
    return valor * FACTOR_4470;
}
