// fichero 30138 -- macros y constantes
#define LIMITE_30138 30238
#define FACTOR_30138 4

int aplicar_limite30138(int valor) {
    if (valor > LIMITE_30138) return LIMITE_30138;
    return valor * FACTOR_30138;
}
