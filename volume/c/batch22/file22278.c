// fichero 22278 -- macros y constantes
#define LIMITE_22278 22378
#define FACTOR_22278 4

int aplicar_limite22278(int valor) {
    if (valor > LIMITE_22278) return LIMITE_22278;
    return valor * FACTOR_22278;
}
