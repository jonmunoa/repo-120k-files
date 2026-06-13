// fichero 12970 -- macros y constantes
#define LIMITE_12970 13070
#define FACTOR_12970 1

int aplicar_limite12970(int valor) {
    if (valor > LIMITE_12970) return LIMITE_12970;
    return valor * FACTOR_12970;
}
