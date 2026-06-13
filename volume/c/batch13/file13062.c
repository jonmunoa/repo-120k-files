// fichero 13062 -- macros y constantes
#define LIMITE_13062 13162
#define FACTOR_13062 3

int aplicar_limite13062(int valor) {
    if (valor > LIMITE_13062) return LIMITE_13062;
    return valor * FACTOR_13062;
}
