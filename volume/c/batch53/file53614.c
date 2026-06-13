// fichero 53614 -- macros y constantes
#define LIMITE_53614 53714
#define FACTOR_53614 5

int aplicar_limite53614(int valor) {
    if (valor > LIMITE_53614) return LIMITE_53614;
    return valor * FACTOR_53614;
}
