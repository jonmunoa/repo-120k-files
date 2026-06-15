// fichero 3470 -- macros y constantes -- MODIFICADO
#define LIMITE_3470 3670
#define FACTOR_3470 2

int aplicar_limite3470(int valor) {
    if (valor > LIMITE_3470) return LIMITE_3470;
    return valor * FACTOR_3470;
}
