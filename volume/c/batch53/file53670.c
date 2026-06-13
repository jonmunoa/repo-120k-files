// fichero 53670 -- macros y constantes
#define LIMITE_53670 53770
#define FACTOR_53670 1

int aplicar_limite53670(int valor) {
    if (valor > LIMITE_53670) return LIMITE_53670;
    return valor * FACTOR_53670;
}
