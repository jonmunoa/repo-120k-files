// fichero 27850 -- macros y constantes -- MODIFICADO
#define LIMITE_27850 28050
#define FACTOR_27850 2

int aplicar_limite27850(int valor) {
    if (valor > LIMITE_27850) return LIMITE_27850;
    return valor * FACTOR_27850;
}
