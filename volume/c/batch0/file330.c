// fichero 330 -- macros y constantes
#define LIMITE_330 430
#define FACTOR_330 1

int aplicar_limite330(int valor) {
    if (valor > LIMITE_330) return LIMITE_330;
    return valor * FACTOR_330;
}
