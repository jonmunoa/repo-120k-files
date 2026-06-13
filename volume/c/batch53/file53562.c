// fichero 53562 -- macros y constantes
#define LIMITE_53562 53662
#define FACTOR_53562 3

int aplicar_limite53562(int valor) {
    if (valor > LIMITE_53562) return LIMITE_53562;
    return valor * FACTOR_53562;
}
