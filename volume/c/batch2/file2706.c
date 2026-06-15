// fichero 2706 -- macros y constantes -- MODIFICADO
#define LIMITE_2706 2906
#define FACTOR_2706 3

int aplicar_limite2706(int valor) {
    if (valor > LIMITE_2706) return LIMITE_2706;
    return valor * FACTOR_2706;
}
