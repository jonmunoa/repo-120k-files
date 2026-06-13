// fichero 36330 -- macros y constantes
#define LIMITE_36330 36430
#define FACTOR_36330 1

int aplicar_limite36330(int valor) {
    if (valor > LIMITE_36330) return LIMITE_36330;
    return valor * FACTOR_36330;
}
