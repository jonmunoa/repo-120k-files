// fichero 10854 -- macros y constantes
#define LIMITE_10854 10954
#define FACTOR_10854 5

int aplicar_limite10854(int valor) {
    if (valor > LIMITE_10854) return LIMITE_10854;
    return valor * FACTOR_10854;
}
