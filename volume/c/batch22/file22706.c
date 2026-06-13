// fichero 22706 -- macros y constantes
#define LIMITE_22706 22806
#define FACTOR_22706 2

int aplicar_limite22706(int valor) {
    if (valor > LIMITE_22706) return LIMITE_22706;
    return valor * FACTOR_22706;
}
