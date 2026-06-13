// fichero 51278 -- macros y constantes
#define LIMITE_51278 51378
#define FACTOR_51278 4

int aplicar_limite51278(int valor) {
    if (valor > LIMITE_51278) return LIMITE_51278;
    return valor * FACTOR_51278;
}
