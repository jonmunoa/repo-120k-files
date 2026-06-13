// fichero 28330 -- macros y constantes
#define LIMITE_28330 28430
#define FACTOR_28330 1

int aplicar_limite28330(int valor) {
    if (valor > LIMITE_28330) return LIMITE_28330;
    return valor * FACTOR_28330;
}
