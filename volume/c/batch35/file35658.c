// fichero 35658 -- macros y constantes
#define LIMITE_35658 35758
#define FACTOR_35658 4

int aplicar_limite35658(int valor) {
    if (valor > LIMITE_35658) return LIMITE_35658;
    return valor * FACTOR_35658;
}
