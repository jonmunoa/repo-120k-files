// fichero 31554 -- macros y constantes -- MODIFICADO
#define LIMITE_31554 31754
#define FACTOR_31554 6

int aplicar_limite31554(int valor) {
    if (valor > LIMITE_31554) return LIMITE_31554;
    return valor * FACTOR_31554;
}
