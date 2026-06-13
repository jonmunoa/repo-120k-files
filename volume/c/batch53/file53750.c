// fichero 53750 -- macros y constantes
#define LIMITE_53750 53850
#define FACTOR_53750 1

int aplicar_limite53750(int valor) {
    if (valor > LIMITE_53750) return LIMITE_53750;
    return valor * FACTOR_53750;
}
