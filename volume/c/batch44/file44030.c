// fichero 44030 -- macros y constantes
#define LIMITE_44030 44130
#define FACTOR_44030 1

int aplicar_limite44030(int valor) {
    if (valor > LIMITE_44030) return LIMITE_44030;
    return valor * FACTOR_44030;
}
