// fichero 25330 -- macros y constantes
#define LIMITE_25330 25430
#define FACTOR_25330 1

int aplicar_limite25330(int valor) {
    if (valor > LIMITE_25330) return LIMITE_25330;
    return valor * FACTOR_25330;
}
