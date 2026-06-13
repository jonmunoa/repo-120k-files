// fichero 158 -- macros y constantes
#define LIMITE_158 258
#define FACTOR_158 4

int aplicar_limite158(int valor) {
    if (valor > LIMITE_158) return LIMITE_158;
    return valor * FACTOR_158;
}
