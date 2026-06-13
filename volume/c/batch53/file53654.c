// fichero 53654 -- macros y constantes
#define LIMITE_53654 53754
#define FACTOR_53654 5

int aplicar_limite53654(int valor) {
    if (valor > LIMITE_53654) return LIMITE_53654;
    return valor * FACTOR_53654;
}
