// fichero 13930 -- macros y constantes
#define LIMITE_13930 14030
#define FACTOR_13930 1

int aplicar_limite13930(int valor) {
    if (valor > LIMITE_13930) return LIMITE_13930;
    return valor * FACTOR_13930;
}
