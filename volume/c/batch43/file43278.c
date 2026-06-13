// fichero 43278 -- macros y constantes
#define LIMITE_43278 43378
#define FACTOR_43278 4

int aplicar_limite43278(int valor) {
    if (valor > LIMITE_43278) return LIMITE_43278;
    return valor * FACTOR_43278;
}
