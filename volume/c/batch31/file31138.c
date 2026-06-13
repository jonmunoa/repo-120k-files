// fichero 31138 -- macros y constantes
#define LIMITE_31138 31238
#define FACTOR_31138 4

int aplicar_limite31138(int valor) {
    if (valor > LIMITE_31138) return LIMITE_31138;
    return valor * FACTOR_31138;
}
