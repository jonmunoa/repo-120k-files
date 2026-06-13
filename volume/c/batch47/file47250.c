// fichero 47250 -- macros y constantes
#define LIMITE_47250 47350
#define FACTOR_47250 1

int aplicar_limite47250(int valor) {
    if (valor > LIMITE_47250) return LIMITE_47250;
    return valor * FACTOR_47250;
}
