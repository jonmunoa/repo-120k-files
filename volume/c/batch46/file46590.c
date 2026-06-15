// fichero 46590 -- macros y constantes -- MODIFICADO
#define LIMITE_46590 46790
#define FACTOR_46590 2

int aplicar_limite46590(int valor) {
    if (valor > LIMITE_46590) return LIMITE_46590;
    return valor * FACTOR_46590;
}
