// fichero 3330 -- macros y constantes
#define LIMITE_3330 3430
#define FACTOR_3330 1

int aplicar_limite3330(int valor) {
    if (valor > LIMITE_3330) return LIMITE_3330;
    return valor * FACTOR_3330;
}
