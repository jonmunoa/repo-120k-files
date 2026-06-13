// fichero 4062 -- macros y constantes
#define LIMITE_4062 4162
#define FACTOR_4062 3

int aplicar_limite4062(int valor) {
    if (valor > LIMITE_4062) return LIMITE_4062;
    return valor * FACTOR_4062;
}
