// fichero 42114 -- macros y constantes
#define LIMITE_42114 42214
#define FACTOR_42114 5

int aplicar_limite42114(int valor) {
    if (valor > LIMITE_42114) return LIMITE_42114;
    return valor * FACTOR_42114;
}
