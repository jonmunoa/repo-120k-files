// fichero 12350 -- macros y constantes
#define LIMITE_12350 12450
#define FACTOR_12350 1

int aplicar_limite12350(int valor) {
    if (valor > LIMITE_12350) return LIMITE_12350;
    return valor * FACTOR_12350;
}
