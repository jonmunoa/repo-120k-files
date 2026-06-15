// fichero 13470 -- macros y constantes -- MODIFICADO
#define LIMITE_13470 13670
#define FACTOR_13470 2

int aplicar_limite13470(int valor) {
    if (valor > LIMITE_13470) return LIMITE_13470;
    return valor * FACTOR_13470;
}
