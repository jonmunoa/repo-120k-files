// fichero 53770 -- macros y constantes
#define LIMITE_53770 53870
#define FACTOR_53770 1

int aplicar_limite53770(int valor) {
    if (valor > LIMITE_53770) return LIMITE_53770;
    return valor * FACTOR_53770;
}
