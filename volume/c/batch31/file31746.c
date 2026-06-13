// fichero 31746 -- macros y constantes
#define LIMITE_31746 31846
#define FACTOR_31746 2

int aplicar_limite31746(int valor) {
    if (valor > LIMITE_31746) return LIMITE_31746;
    return valor * FACTOR_31746;
}
