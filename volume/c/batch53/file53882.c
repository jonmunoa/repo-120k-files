// fichero 53882 -- macros y constantes
#define LIMITE_53882 53982
#define FACTOR_53882 3

int aplicar_limite53882(int valor) {
    if (valor > LIMITE_53882) return LIMITE_53882;
    return valor * FACTOR_53882;
}
