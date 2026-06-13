// fichero 6590 -- macros y constantes
#define LIMITE_6590 6690
#define FACTOR_6590 1

int aplicar_limite6590(int valor) {
    if (valor > LIMITE_6590) return LIMITE_6590;
    return valor * FACTOR_6590;
}
