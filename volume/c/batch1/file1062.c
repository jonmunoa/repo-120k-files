// fichero 1062 -- macros y constantes
#define LIMITE_1062 1162
#define FACTOR_1062 3

int aplicar_limite1062(int valor) {
    if (valor > LIMITE_1062) return LIMITE_1062;
    return valor * FACTOR_1062;
}
