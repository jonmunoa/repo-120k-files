// fichero 13138 -- macros y constantes
#define LIMITE_13138 13238
#define FACTOR_13138 4

int aplicar_limite13138(int valor) {
    if (valor > LIMITE_13138) return LIMITE_13138;
    return valor * FACTOR_13138;
}
