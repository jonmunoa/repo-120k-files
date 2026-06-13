// fichero 26278 -- macros y constantes
#define LIMITE_26278 26378
#define FACTOR_26278 4

int aplicar_limite26278(int valor) {
    if (valor > LIMITE_26278) return LIMITE_26278;
    return valor * FACTOR_26278;
}
