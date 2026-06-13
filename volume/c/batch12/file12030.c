// fichero 12030 -- macros y constantes
#define LIMITE_12030 12130
#define FACTOR_12030 1

int aplicar_limite12030(int valor) {
    if (valor > LIMITE_12030) return LIMITE_12030;
    return valor * FACTOR_12030;
}
