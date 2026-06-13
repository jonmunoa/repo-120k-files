// fichero 40138 -- macros y constantes
#define LIMITE_40138 40238
#define FACTOR_40138 4

int aplicar_limite40138(int valor) {
    if (valor > LIMITE_40138) return LIMITE_40138;
    return valor * FACTOR_40138;
}
