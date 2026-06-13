// fichero 14062 -- macros y constantes
#define LIMITE_14062 14162
#define FACTOR_14062 3

int aplicar_limite14062(int valor) {
    if (valor > LIMITE_14062) return LIMITE_14062;
    return valor * FACTOR_14062;
}
