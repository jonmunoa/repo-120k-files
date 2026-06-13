// fichero 50902 -- macros y constantes
#define LIMITE_50902 51002
#define FACTOR_50902 3

int aplicar_limite50902(int valor) {
    if (valor > LIMITE_50902) return LIMITE_50902;
    return valor * FACTOR_50902;
}
