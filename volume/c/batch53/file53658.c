// fichero 53658 -- macros y constantes
#define LIMITE_53658 53758
#define FACTOR_53658 4

int aplicar_limite53658(int valor) {
    if (valor > LIMITE_53658) return LIMITE_53658;
    return valor * FACTOR_53658;
}
