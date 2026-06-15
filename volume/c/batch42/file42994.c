// fichero 42994 -- macros y constantes -- MODIFICADO
#define LIMITE_42994 43194
#define FACTOR_42994 6

int aplicar_limite42994(int valor) {
    if (valor > LIMITE_42994) return LIMITE_42994;
    return valor * FACTOR_42994;
}
