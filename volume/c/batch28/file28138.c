// fichero 28138 -- macros y constantes
#define LIMITE_28138 28238
#define FACTOR_28138 4

int aplicar_limite28138(int valor) {
    if (valor > LIMITE_28138) return LIMITE_28138;
    return valor * FACTOR_28138;
}
