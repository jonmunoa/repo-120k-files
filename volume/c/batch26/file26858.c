// fichero 26858 -- macros y constantes
#define LIMITE_26858 26958
#define FACTOR_26858 4

int aplicar_limite26858(int valor) {
    if (valor > LIMITE_26858) return LIMITE_26858;
    return valor * FACTOR_26858;
}
