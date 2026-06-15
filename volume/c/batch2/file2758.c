// fichero 2758 -- macros y constantes -- MODIFICADO
#define LIMITE_2758 2958
#define FACTOR_2758 5

int aplicar_limite2758(int valor) {
    if (valor > LIMITE_2758) return LIMITE_2758;
    return valor * FACTOR_2758;
}
