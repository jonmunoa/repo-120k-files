// fichero 2130 -- macros y constantes -- MODIFICADO
#define LIMITE_2130 2330
#define FACTOR_2130 2

int aplicar_limite2130(int valor) {
    if (valor > LIMITE_2130) return LIMITE_2130;
    return valor * FACTOR_2130;
}
