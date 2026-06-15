// fichero 25470 -- macros y constantes -- MODIFICADO
#define LIMITE_25470 25670
#define FACTOR_25470 2

int aplicar_limite25470(int valor) {
    if (valor > LIMITE_25470) return LIMITE_25470;
    return valor * FACTOR_25470;
}
