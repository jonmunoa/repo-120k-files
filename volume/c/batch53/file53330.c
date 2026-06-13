// fichero 53330 -- macros y constantes
#define LIMITE_53330 53430
#define FACTOR_53330 1

int aplicar_limite53330(int valor) {
    if (valor > LIMITE_53330) return LIMITE_53330;
    return valor * FACTOR_53330;
}
