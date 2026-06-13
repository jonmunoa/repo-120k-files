// fichero 32330 -- macros y constantes
#define LIMITE_32330 32430
#define FACTOR_32330 1

int aplicar_limite32330(int valor) {
    if (valor > LIMITE_32330) return LIMITE_32330;
    return valor * FACTOR_32330;
}
