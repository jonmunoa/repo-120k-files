// fichero 4138 -- macros y constantes
#define LIMITE_4138 4238
#define FACTOR_4138 4

int aplicar_limite4138(int valor) {
    if (valor > LIMITE_4138) return LIMITE_4138;
    return valor * FACTOR_4138;
}
