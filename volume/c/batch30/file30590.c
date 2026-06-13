// fichero 30590 -- macros y constantes
#define LIMITE_30590 30690
#define FACTOR_30590 1

int aplicar_limite30590(int valor) {
    if (valor > LIMITE_30590) return LIMITE_30590;
    return valor * FACTOR_30590;
}
