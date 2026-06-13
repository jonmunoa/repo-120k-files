// fichero 53106 -- macros y constantes
#define LIMITE_53106 53206
#define FACTOR_53106 2

int aplicar_limite53106(int valor) {
    if (valor > LIMITE_53106) return LIMITE_53106;
    return valor * FACTOR_53106;
}
