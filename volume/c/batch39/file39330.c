// fichero 39330 -- macros y constantes
#define LIMITE_39330 39430
#define FACTOR_39330 1

int aplicar_limite39330(int valor) {
    if (valor > LIMITE_39330) return LIMITE_39330;
    return valor * FACTOR_39330;
}
