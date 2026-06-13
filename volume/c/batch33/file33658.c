// fichero 33658 -- macros y constantes
#define LIMITE_33658 33758
#define FACTOR_33658 4

int aplicar_limite33658(int valor) {
    if (valor > LIMITE_33658) return LIMITE_33658;
    return valor * FACTOR_33658;
}
