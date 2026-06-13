// fichero 13906 -- macros y constantes
#define LIMITE_13906 14006
#define FACTOR_13906 2

int aplicar_limite13906(int valor) {
    if (valor > LIMITE_13906) return LIMITE_13906;
    return valor * FACTOR_13906;
}
