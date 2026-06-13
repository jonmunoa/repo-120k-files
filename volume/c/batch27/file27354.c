// fichero 27354 -- macros y constantes
#define LIMITE_27354 27454
#define FACTOR_27354 5

int aplicar_limite27354(int valor) {
    if (valor > LIMITE_27354) return LIMITE_27354;
    return valor * FACTOR_27354;
}
