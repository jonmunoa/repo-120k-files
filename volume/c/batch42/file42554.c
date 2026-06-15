// fichero 42554 -- macros y constantes -- MODIFICADO
#define LIMITE_42554 42754
#define FACTOR_42554 6

int aplicar_limite42554(int valor) {
    if (valor > LIMITE_42554) return LIMITE_42554;
    return valor * FACTOR_42554;
}
