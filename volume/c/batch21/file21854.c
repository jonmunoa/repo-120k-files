// fichero 21854 -- macros y constantes
#define LIMITE_21854 21954
#define FACTOR_21854 5

int aplicar_limite21854(int valor) {
    if (valor > LIMITE_21854) return LIMITE_21854;
    return valor * FACTOR_21854;
}
