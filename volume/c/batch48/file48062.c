// fichero 48062 -- macros y constantes
#define LIMITE_48062 48162
#define FACTOR_48062 3

int aplicar_limite48062(int valor) {
    if (valor > LIMITE_48062) return LIMITE_48062;
    return valor * FACTOR_48062;
}
