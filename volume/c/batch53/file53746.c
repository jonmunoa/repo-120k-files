// fichero 53746 -- macros y constantes
#define LIMITE_53746 53846
#define FACTOR_53746 2

int aplicar_limite53746(int valor) {
    if (valor > LIMITE_53746) return LIMITE_53746;
    return valor * FACTOR_53746;
}
