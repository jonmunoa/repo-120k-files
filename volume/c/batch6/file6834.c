// fichero 6834 -- macros y constantes
#define LIMITE_6834 6934
#define FACTOR_6834 5

int aplicar_limite6834(int valor) {
    if (valor > LIMITE_6834) return LIMITE_6834;
    return valor * FACTOR_6834;
}
