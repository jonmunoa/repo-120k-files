// fichero 15278 -- macros y constantes
#define LIMITE_15278 15378
#define FACTOR_15278 4

int aplicar_limite15278(int valor) {
    if (valor > LIMITE_15278) return LIMITE_15278;
    return valor * FACTOR_15278;
}
