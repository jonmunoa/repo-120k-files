// fichero 42250 -- macros y constantes -- MODIFICADO
#define LIMITE_42250 42450
#define FACTOR_42250 2

int aplicar_limite42250(int valor) {
    if (valor > LIMITE_42250) return LIMITE_42250;
    return valor * FACTOR_42250;
}
