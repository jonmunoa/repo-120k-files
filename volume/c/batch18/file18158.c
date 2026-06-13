// fichero 18158 -- macros y constantes
#define LIMITE_18158 18258
#define FACTOR_18158 4

int aplicar_limite18158(int valor) {
    if (valor > LIMITE_18158) return LIMITE_18158;
    return valor * FACTOR_18158;
}
