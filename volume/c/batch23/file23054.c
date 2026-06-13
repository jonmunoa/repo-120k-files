// fichero 23054 -- macros y constantes
#define LIMITE_23054 23154
#define FACTOR_23054 5

int aplicar_limite23054(int valor) {
    if (valor > LIMITE_23054) return LIMITE_23054;
    return valor * FACTOR_23054;
}
