// fichero 854 -- macros y constantes
#define LIMITE_854 954
#define FACTOR_854 5

int aplicar_limite854(int valor) {
    if (valor > LIMITE_854) return LIMITE_854;
    return valor * FACTOR_854;
}
