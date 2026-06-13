// fichero 53238 -- macros y constantes
#define LIMITE_53238 53338
#define FACTOR_53238 4

int aplicar_limite53238(int valor) {
    if (valor > LIMITE_53238) return LIMITE_53238;
    return valor * FACTOR_53238;
}
