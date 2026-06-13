// fichero 14030 -- macros y constantes
#define LIMITE_14030 14130
#define FACTOR_14030 1

int aplicar_limite14030(int valor) {
    if (valor > LIMITE_14030) return LIMITE_14030;
    return valor * FACTOR_14030;
}
