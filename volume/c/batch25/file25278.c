// fichero 25278 -- macros y constantes
#define LIMITE_25278 25378
#define FACTOR_25278 4

int aplicar_limite25278(int valor) {
    if (valor > LIMITE_25278) return LIMITE_25278;
    return valor * FACTOR_25278;
}
