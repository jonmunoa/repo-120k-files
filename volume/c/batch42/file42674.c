// fichero 42674 -- macros y constantes
#define LIMITE_42674 42774
#define FACTOR_42674 5

int aplicar_limite42674(int valor) {
    if (valor > LIMITE_42674) return LIMITE_42674;
    return valor * FACTOR_42674;
}
