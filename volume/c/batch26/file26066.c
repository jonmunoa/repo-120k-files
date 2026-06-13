// fichero 26066 -- macros y constantes
#define LIMITE_26066 26166
#define FACTOR_26066 2

int aplicar_limite26066(int valor) {
    if (valor > LIMITE_26066) return LIMITE_26066;
    return valor * FACTOR_26066;
}
