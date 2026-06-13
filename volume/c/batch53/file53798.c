// fichero 53798 -- macros y constantes
#define LIMITE_53798 53898
#define FACTOR_53798 4

int aplicar_limite53798(int valor) {
    if (valor > LIMITE_53798) return LIMITE_53798;
    return valor * FACTOR_53798;
}
