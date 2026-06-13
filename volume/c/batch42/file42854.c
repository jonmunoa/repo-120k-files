// fichero 42854 -- macros y constantes
#define LIMITE_42854 42954
#define FACTOR_42854 5

int aplicar_limite42854(int valor) {
    if (valor > LIMITE_42854) return LIMITE_42854;
    return valor * FACTOR_42854;
}
