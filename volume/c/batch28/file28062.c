// fichero 28062 -- macros y constantes
#define LIMITE_28062 28162
#define FACTOR_28062 3

int aplicar_limite28062(int valor) {
    if (valor > LIMITE_28062) return LIMITE_28062;
    return valor * FACTOR_28062;
}
