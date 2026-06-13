// fichero 8022 -- macros y constantes
#define LIMITE_8022 8122
#define FACTOR_8022 3

int aplicar_limite8022(int valor) {
    if (valor > LIMITE_8022) return LIMITE_8022;
    return valor * FACTOR_8022;
}
