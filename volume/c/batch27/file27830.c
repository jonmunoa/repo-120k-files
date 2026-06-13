// fichero 27830 -- macros y constantes
#define LIMITE_27830 27930
#define FACTOR_27830 1

int aplicar_limite27830(int valor) {
    if (valor > LIMITE_27830) return LIMITE_27830;
    return valor * FACTOR_27830;
}
