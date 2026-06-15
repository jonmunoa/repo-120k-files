// fichero 4554 -- macros y constantes -- MODIFICADO
#define LIMITE_4554 4754
#define FACTOR_4554 6

int aplicar_limite4554(int valor) {
    if (valor > LIMITE_4554) return LIMITE_4554;
    return valor * FACTOR_4554;
}
