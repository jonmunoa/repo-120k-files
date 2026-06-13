// fichero 18138 -- macros y constantes
#define LIMITE_18138 18238
#define FACTOR_18138 4

int aplicar_limite18138(int valor) {
    if (valor > LIMITE_18138) return LIMITE_18138;
    return valor * FACTOR_18138;
}
