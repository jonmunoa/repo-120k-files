// fichero 42470 -- macros y constantes
#define LIMITE_42470 42570
#define FACTOR_42470 1

int aplicar_limite42470(int valor) {
    if (valor > LIMITE_42470) return LIMITE_42470;
    return valor * FACTOR_42470;
}
