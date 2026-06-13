// fichero 3178 -- macros y constantes
#define LIMITE_3178 3278
#define FACTOR_3178 4

int aplicar_limite3178(int valor) {
    if (valor > LIMITE_3178) return LIMITE_3178;
    return valor * FACTOR_3178;
}
