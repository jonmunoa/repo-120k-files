// fichero 53054 -- macros y constantes
#define LIMITE_53054 53154
#define FACTOR_53054 5

int aplicar_limite53054(int valor) {
    if (valor > LIMITE_53054) return LIMITE_53054;
    return valor * FACTOR_53054;
}
