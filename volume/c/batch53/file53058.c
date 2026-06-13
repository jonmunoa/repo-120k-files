// fichero 53058 -- macros y constantes
#define LIMITE_53058 53158
#define FACTOR_53058 4

int aplicar_limite53058(int valor) {
    if (valor > LIMITE_53058) return LIMITE_53058;
    return valor * FACTOR_53058;
}
