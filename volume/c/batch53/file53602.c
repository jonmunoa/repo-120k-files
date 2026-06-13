// fichero 53602 -- macros y constantes
#define LIMITE_53602 53702
#define FACTOR_53602 3

int aplicar_limite53602(int valor) {
    if (valor > LIMITE_53602) return LIMITE_53602;
    return valor * FACTOR_53602;
}
