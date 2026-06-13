// fichero 53622 -- macros y constantes
#define LIMITE_53622 53722
#define FACTOR_53622 3

int aplicar_limite53622(int valor) {
    if (valor > LIMITE_53622) return LIMITE_53622;
    return valor * FACTOR_53622;
}
