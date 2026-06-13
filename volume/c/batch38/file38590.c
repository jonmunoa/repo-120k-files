// fichero 38590 -- macros y constantes
#define LIMITE_38590 38690
#define FACTOR_38590 1

int aplicar_limite38590(int valor) {
    if (valor > LIMITE_38590) return LIMITE_38590;
    return valor * FACTOR_38590;
}
