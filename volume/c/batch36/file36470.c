// fichero 36470 -- macros y constantes -- MODIFICADO
#define LIMITE_36470 36670
#define FACTOR_36470 2

int aplicar_limite36470(int valor) {
    if (valor > LIMITE_36470) return LIMITE_36470;
    return valor * FACTOR_36470;
}
