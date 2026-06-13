// fichero 27850 -- macros y constantes
#define LIMITE_27850 27950
#define FACTOR_27850 1

int aplicar_limite27850(int valor) {
    if (valor > LIMITE_27850) return LIMITE_27850;
    return valor * FACTOR_27850;
}
