// fichero 45030 -- macros y constantes
#define LIMITE_45030 45130
#define FACTOR_45030 1

int aplicar_limite45030(int valor) {
    if (valor > LIMITE_45030) return LIMITE_45030;
    return valor * FACTOR_45030;
}
