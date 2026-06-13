// fichero 52134 -- macros y constantes
#define LIMITE_52134 52234
#define FACTOR_52134 5

int aplicar_limite52134(int valor) {
    if (valor > LIMITE_52134) return LIMITE_52134;
    return valor * FACTOR_52134;
}
