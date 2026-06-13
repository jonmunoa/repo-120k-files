// fichero 23062 -- macros y constantes
#define LIMITE_23062 23162
#define FACTOR_23062 3

int aplicar_limite23062(int valor) {
    if (valor > LIMITE_23062) return LIMITE_23062;
    return valor * FACTOR_23062;
}
