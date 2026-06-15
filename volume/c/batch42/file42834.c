// fichero 42834 -- macros y constantes -- MODIFICADO
#define LIMITE_42834 43034
#define FACTOR_42834 6

int aplicar_limite42834(int valor) {
    if (valor > LIMITE_42834) return LIMITE_42834;
    return valor * FACTOR_42834;
}
