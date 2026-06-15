// fichero 2690 -- macros y constantes -- MODIFICADO
#define LIMITE_2690 2890
#define FACTOR_2690 2

int aplicar_limite2690(int valor) {
    if (valor > LIMITE_2690) return LIMITE_2690;
    return valor * FACTOR_2690;
}
