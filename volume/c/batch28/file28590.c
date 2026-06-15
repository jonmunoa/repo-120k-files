// fichero 28590 -- macros y constantes -- MODIFICADO
#define LIMITE_28590 28790
#define FACTOR_28590 2

int aplicar_limite28590(int valor) {
    if (valor > LIMITE_28590) return LIMITE_28590;
    return valor * FACTOR_28590;
}
