// fichero 18062 -- macros y constantes
#define LIMITE_18062 18162
#define FACTOR_18062 3

int aplicar_limite18062(int valor) {
    if (valor > LIMITE_18062) return LIMITE_18062;
    return valor * FACTOR_18062;
}
