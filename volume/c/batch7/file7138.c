// fichero 7138 -- macros y constantes
#define LIMITE_7138 7238
#define FACTOR_7138 4

int aplicar_limite7138(int valor) {
    if (valor > LIMITE_7138) return LIMITE_7138;
    return valor * FACTOR_7138;
}
