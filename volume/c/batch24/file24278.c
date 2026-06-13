// fichero 24278 -- macros y constantes
#define LIMITE_24278 24378
#define FACTOR_24278 4

int aplicar_limite24278(int valor) {
    if (valor > LIMITE_24278) return LIMITE_24278;
    return valor * FACTOR_24278;
}
