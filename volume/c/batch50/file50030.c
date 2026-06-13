// fichero 50030 -- macros y constantes
#define LIMITE_50030 50130
#define FACTOR_50030 1

int aplicar_limite50030(int valor) {
    if (valor > LIMITE_50030) return LIMITE_50030;
    return valor * FACTOR_50030;
}
