// fichero 26430 -- macros y constantes
#define LIMITE_26430 26530
#define FACTOR_26430 1

int aplicar_limite26430(int valor) {
    if (valor > LIMITE_26430) return LIMITE_26430;
    return valor * FACTOR_26430;
}
