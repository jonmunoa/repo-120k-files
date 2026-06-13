// fichero 51670 -- macros y constantes
#define LIMITE_51670 51770
#define FACTOR_51670 1

int aplicar_limite51670(int valor) {
    if (valor > LIMITE_51670) return LIMITE_51670;
    return valor * FACTOR_51670;
}
