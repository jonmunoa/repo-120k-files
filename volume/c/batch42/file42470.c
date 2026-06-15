// fichero 42470 -- macros y constantes -- MODIFICADO
#define LIMITE_42470 42670
#define FACTOR_42470 2

int aplicar_limite42470(int valor) {
    if (valor > LIMITE_42470) return LIMITE_42470;
    return valor * FACTOR_42470;
}
