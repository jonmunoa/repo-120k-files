// fichero 40310 -- macros y constantes
#define LIMITE_40310 40410
#define FACTOR_40310 1

int aplicar_limite40310(int valor) {
    if (valor > LIMITE_40310) return LIMITE_40310;
    return valor * FACTOR_40310;
}
