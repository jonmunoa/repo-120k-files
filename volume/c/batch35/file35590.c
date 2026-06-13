// fichero 35590 -- macros y constantes
#define LIMITE_35590 35690
#define FACTOR_35590 1

int aplicar_limite35590(int valor) {
    if (valor > LIMITE_35590) return LIMITE_35590;
    return valor * FACTOR_35590;
}
