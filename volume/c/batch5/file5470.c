// fichero 5470 -- macros y constantes -- MODIFICADO
#define LIMITE_5470 5670
#define FACTOR_5470 2

int aplicar_limite5470(int valor) {
    if (valor > LIMITE_5470) return LIMITE_5470;
    return valor * FACTOR_5470;
}
