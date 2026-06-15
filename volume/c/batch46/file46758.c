// fichero 46758 -- macros y constantes -- MODIFICADO
#define LIMITE_46758 46958
#define FACTOR_46758 5

int aplicar_limite46758(int valor) {
    if (valor > LIMITE_46758) return LIMITE_46758;
    return valor * FACTOR_46758;
}
