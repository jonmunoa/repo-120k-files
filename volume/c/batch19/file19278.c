// fichero 19278 -- macros y constantes
#define LIMITE_19278 19378
#define FACTOR_19278 4

int aplicar_limite19278(int valor) {
    if (valor > LIMITE_19278) return LIMITE_19278;
    return valor * FACTOR_19278;
}
