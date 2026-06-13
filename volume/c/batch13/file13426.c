// fichero 13426 -- macros y constantes
#define LIMITE_13426 13526
#define FACTOR_13426 2

int aplicar_limite13426(int valor) {
    if (valor > LIMITE_13426) return LIMITE_13426;
    return valor * FACTOR_13426;
}
