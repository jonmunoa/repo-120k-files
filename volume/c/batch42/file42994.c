// fichero 42994 -- macros y constantes
#define LIMITE_42994 43094
#define FACTOR_42994 5

int aplicar_limite42994(int valor) {
    if (valor > LIMITE_42994) return LIMITE_42994;
    return valor * FACTOR_42994;
}
