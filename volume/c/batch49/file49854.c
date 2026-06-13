// fichero 49854 -- macros y constantes
#define LIMITE_49854 49954
#define FACTOR_49854 5

int aplicar_limite49854(int valor) {
    if (valor > LIMITE_49854) return LIMITE_49854;
    return valor * FACTOR_49854;
}
