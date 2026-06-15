// fichero 18734 -- macros y constantes -- MODIFICADO
#define LIMITE_18734 18934
#define FACTOR_18734 6

int aplicar_limite18734(int valor) {
    if (valor > LIMITE_18734) return LIMITE_18734;
    return valor * FACTOR_18734;
}
