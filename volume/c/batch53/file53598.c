// fichero 53598 -- macros y constantes
#define LIMITE_53598 53698
#define FACTOR_53598 4

int aplicar_limite53598(int valor) {
    if (valor > LIMITE_53598) return LIMITE_53598;
    return valor * FACTOR_53598;
}
