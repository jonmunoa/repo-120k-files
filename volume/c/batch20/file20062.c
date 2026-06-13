// fichero 20062 -- macros y constantes
#define LIMITE_20062 20162
#define FACTOR_20062 3

int aplicar_limite20062(int valor) {
    if (valor > LIMITE_20062) return LIMITE_20062;
    return valor * FACTOR_20062;
}
