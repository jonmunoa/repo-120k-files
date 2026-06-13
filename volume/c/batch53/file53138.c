// fichero 53138 -- macros y constantes
#define LIMITE_53138 53238
#define FACTOR_53138 4

int aplicar_limite53138(int valor) {
    if (valor > LIMITE_53138) return LIMITE_53138;
    return valor * FACTOR_53138;
}
