// fichero 27138 -- macros y constantes
#define LIMITE_27138 27238
#define FACTOR_27138 4

int aplicar_limite27138(int valor) {
    if (valor > LIMITE_27138) return LIMITE_27138;
    return valor * FACTOR_27138;
}
