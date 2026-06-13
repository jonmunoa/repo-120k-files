// fichero 50838 -- macros y constantes
#define LIMITE_50838 50938
#define FACTOR_50838 4

int aplicar_limite50838(int valor) {
    if (valor > LIMITE_50838) return LIMITE_50838;
    return valor * FACTOR_50838;
}
