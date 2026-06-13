// fichero 53414 -- macros y constantes
#define LIMITE_53414 53514
#define FACTOR_53414 5

int aplicar_limite53414(int valor) {
    if (valor > LIMITE_53414) return LIMITE_53414;
    return valor * FACTOR_53414;
}
