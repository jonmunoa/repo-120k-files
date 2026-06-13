// fichero 4330 -- macros y constantes
#define LIMITE_4330 4430
#define FACTOR_4330 1

int aplicar_limite4330(int valor) {
    if (valor > LIMITE_4330) return LIMITE_4330;
    return valor * FACTOR_4330;
}
