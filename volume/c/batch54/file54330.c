// fichero 54330 -- macros y constantes
#define LIMITE_54330 54430
#define FACTOR_54330 1

int aplicar_limite54330(int valor) {
    if (valor > LIMITE_54330) return LIMITE_54330;
    return valor * FACTOR_54330;
}
