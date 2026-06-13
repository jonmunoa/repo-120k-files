// fichero 34590 -- macros y constantes
#define LIMITE_34590 34690
#define FACTOR_34590 1

int aplicar_limite34590(int valor) {
    if (valor > LIMITE_34590) return LIMITE_34590;
    return valor * FACTOR_34590;
}
