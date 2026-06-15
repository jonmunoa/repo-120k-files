// fichero 46250 -- macros y constantes -- MODIFICADO
#define LIMITE_46250 46450
#define FACTOR_46250 2

int aplicar_limite46250(int valor) {
    if (valor > LIMITE_46250) return LIMITE_46250;
    return valor * FACTOR_46250;
}
