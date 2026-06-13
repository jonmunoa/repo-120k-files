// fichero 25062 -- macros y constantes
#define LIMITE_25062 25162
#define FACTOR_25062 3

int aplicar_limite25062(int valor) {
    if (valor > LIMITE_25062) return LIMITE_25062;
    return valor * FACTOR_25062;
}
