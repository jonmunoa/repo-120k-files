// fichero 30854 -- macros y constantes
#define LIMITE_30854 30954
#define FACTOR_30854 5

int aplicar_limite30854(int valor) {
    if (valor > LIMITE_30854) return LIMITE_30854;
    return valor * FACTOR_30854;
}
