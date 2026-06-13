// fichero 14138 -- macros y constantes
#define LIMITE_14138 14238
#define FACTOR_14138 4

int aplicar_limite14138(int valor) {
    if (valor > LIMITE_14138) return LIMITE_14138;
    return valor * FACTOR_14138;
}
