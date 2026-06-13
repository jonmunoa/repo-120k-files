// fichero 3062 -- macros y constantes
#define LIMITE_3062 3162
#define FACTOR_3062 3

int aplicar_limite3062(int valor) {
    if (valor > LIMITE_3062) return LIMITE_3062;
    return valor * FACTOR_3062;
}
