// fichero 35330 -- macros y constantes
#define LIMITE_35330 35430
#define FACTOR_35330 1

int aplicar_limite35330(int valor) {
    if (valor > LIMITE_35330) return LIMITE_35330;
    return valor * FACTOR_35330;
}
