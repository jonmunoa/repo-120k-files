// fichero 42602 -- macros y constantes
#define LIMITE_42602 42702
#define FACTOR_42602 3

int aplicar_limite42602(int valor) {
    if (valor > LIMITE_42602) return LIMITE_42602;
    return valor * FACTOR_42602;
}
