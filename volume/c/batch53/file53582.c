// fichero 53582 -- macros y constantes
#define LIMITE_53582 53682
#define FACTOR_53582 3

int aplicar_limite53582(int valor) {
    if (valor > LIMITE_53582) return LIMITE_53582;
    return valor * FACTOR_53582;
}
