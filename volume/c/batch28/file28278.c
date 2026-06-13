// fichero 28278 -- macros y constantes
#define LIMITE_28278 28378
#define FACTOR_28278 4

int aplicar_limite28278(int valor) {
    if (valor > LIMITE_28278) return LIMITE_28278;
    return valor * FACTOR_28278;
}
