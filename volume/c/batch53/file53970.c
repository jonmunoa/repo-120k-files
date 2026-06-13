// fichero 53970 -- macros y constantes
#define LIMITE_53970 54070
#define FACTOR_53970 1

int aplicar_limite53970(int valor) {
    if (valor > LIMITE_53970) return LIMITE_53970;
    return valor * FACTOR_53970;
}
