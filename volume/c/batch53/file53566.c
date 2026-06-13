// fichero 53566 -- macros y constantes
#define LIMITE_53566 53666
#define FACTOR_53566 2

int aplicar_limite53566(int valor) {
    if (valor > LIMITE_53566) return LIMITE_53566;
    return valor * FACTOR_53566;
}
