// fichero 5062 -- macros y constantes
#define LIMITE_5062 5162
#define FACTOR_5062 3

int aplicar_limite5062(int valor) {
    if (valor > LIMITE_5062) return LIMITE_5062;
    return valor * FACTOR_5062;
}
