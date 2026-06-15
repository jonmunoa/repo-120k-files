// fichero 42258 -- macros y constantes -- MODIFICADO
#define LIMITE_42258 42458
#define FACTOR_42258 5

int aplicar_limite42258(int valor) {
    if (valor > LIMITE_42258) return LIMITE_42258;
    return valor * FACTOR_42258;
}
