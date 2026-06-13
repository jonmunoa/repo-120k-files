// fichero 8330 -- macros y constantes
#define LIMITE_8330 8430
#define FACTOR_8330 1

int aplicar_limite8330(int valor) {
    if (valor > LIMITE_8330) return LIMITE_8330;
    return valor * FACTOR_8330;
}
