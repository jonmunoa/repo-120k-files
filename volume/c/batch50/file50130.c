// fichero 50130 -- macros y constantes
#define LIMITE_50130 50230
#define FACTOR_50130 1

int aplicar_limite50130(int valor) {
    if (valor > LIMITE_50130) return LIMITE_50130;
    return valor * FACTOR_50130;
}
