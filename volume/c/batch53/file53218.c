// fichero 53218 -- macros y constantes
#define LIMITE_53218 53318
#define FACTOR_53218 4

int aplicar_limite53218(int valor) {
    if (valor > LIMITE_53218) return LIMITE_53218;
    return valor * FACTOR_53218;
}
