// fichero 27610 -- macros y constantes
#define LIMITE_27610 27710
#define FACTOR_27610 1

int aplicar_limite27610(int valor) {
    if (valor > LIMITE_27610) return LIMITE_27610;
    return valor * FACTOR_27610;
}
