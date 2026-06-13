// fichero 32030 -- macros y constantes
#define LIMITE_32030 32130
#define FACTOR_32030 1

int aplicar_limite32030(int valor) {
    if (valor > LIMITE_32030) return LIMITE_32030;
    return valor * FACTOR_32030;
}
