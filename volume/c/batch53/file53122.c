// fichero 53122 -- macros y constantes
#define LIMITE_53122 53222
#define FACTOR_53122 3

int aplicar_limite53122(int valor) {
    if (valor > LIMITE_53122) return LIMITE_53122;
    return valor * FACTOR_53122;
}
