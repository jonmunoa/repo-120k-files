// fichero 50950 -- macros y constantes
#define LIMITE_50950 51050
#define FACTOR_50950 1

int aplicar_limite50950(int valor) {
    if (valor > LIMITE_50950) return LIMITE_50950;
    return valor * FACTOR_50950;
}
