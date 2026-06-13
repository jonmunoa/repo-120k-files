// fichero 3138 -- macros y constantes
#define LIMITE_3138 3238
#define FACTOR_3138 4

int aplicar_limite3138(int valor) {
    if (valor > LIMITE_3138) return LIMITE_3138;
    return valor * FACTOR_3138;
}
