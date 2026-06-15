// fichero 46790 -- macros y constantes -- MODIFICADO
#define LIMITE_46790 46990
#define FACTOR_46790 2

int aplicar_limite46790(int valor) {
    if (valor > LIMITE_46790) return LIMITE_46790;
    return valor * FACTOR_46790;
}
