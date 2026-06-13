// fichero 16138 -- macros y constantes
#define LIMITE_16138 16238
#define FACTOR_16138 4

int aplicar_limite16138(int valor) {
    if (valor > LIMITE_16138) return LIMITE_16138;
    return valor * FACTOR_16138;
}
