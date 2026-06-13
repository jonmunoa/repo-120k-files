// fichero 53854 -- macros y constantes
#define LIMITE_53854 53954
#define FACTOR_53854 5

int aplicar_limite53854(int valor) {
    if (valor > LIMITE_53854) return LIMITE_53854;
    return valor * FACTOR_53854;
}
