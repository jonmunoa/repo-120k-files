// fichero 2706 -- macros y constantes
#define LIMITE_2706 2806
#define FACTOR_2706 2

int aplicar_limite2706(int valor) {
    if (valor > LIMITE_2706) return LIMITE_2706;
    return valor * FACTOR_2706;
}
