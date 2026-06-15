// fichero 26858 -- macros y constantes -- MODIFICADO
#define LIMITE_26858 27058
#define FACTOR_26858 5

int aplicar_limite26858(int valor) {
    if (valor > LIMITE_26858) return LIMITE_26858;
    return valor * FACTOR_26858;
}
