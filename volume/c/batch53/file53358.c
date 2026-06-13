// fichero 53358 -- macros y constantes
#define LIMITE_53358 53458
#define FACTOR_53358 4

int aplicar_limite53358(int valor) {
    if (valor > LIMITE_53358) return LIMITE_53358;
    return valor * FACTOR_53358;
}
