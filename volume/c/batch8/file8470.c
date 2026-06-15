// fichero 8470 -- macros y constantes -- MODIFICADO
#define LIMITE_8470 8670
#define FACTOR_8470 2

int aplicar_limite8470(int valor) {
    if (valor > LIMITE_8470) return LIMITE_8470;
    return valor * FACTOR_8470;
}
