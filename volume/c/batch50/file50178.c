// fichero 50178 -- macros y constantes
#define LIMITE_50178 50278
#define FACTOR_50178 4

int aplicar_limite50178(int valor) {
    if (valor > LIMITE_50178) return LIMITE_50178;
    return valor * FACTOR_50178;
}
