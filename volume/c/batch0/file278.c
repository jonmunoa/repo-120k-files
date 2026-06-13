// fichero 278 -- macros y constantes
#define LIMITE_278 378
#define FACTOR_278 4

int aplicar_limite278(int valor) {
    if (valor > LIMITE_278) return LIMITE_278;
    return valor * FACTOR_278;
}
