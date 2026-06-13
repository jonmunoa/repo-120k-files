// fichero 22062 -- macros y constantes
#define LIMITE_22062 22162
#define FACTOR_22062 3

int aplicar_limite22062(int valor) {
    if (valor > LIMITE_22062) return LIMITE_22062;
    return valor * FACTOR_22062;
}
