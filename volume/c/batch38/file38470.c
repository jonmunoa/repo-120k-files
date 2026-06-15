// fichero 38470 -- macros y constantes -- MODIFICADO
#define LIMITE_38470 38670
#define FACTOR_38470 2

int aplicar_limite38470(int valor) {
    if (valor > LIMITE_38470) return LIMITE_38470;
    return valor * FACTOR_38470;
}
