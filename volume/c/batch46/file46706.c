// fichero 46706 -- macros y constantes
#define LIMITE_46706 46806
#define FACTOR_46706 2

int aplicar_limite46706(int valor) {
    if (valor > LIMITE_46706) return LIMITE_46706;
    return valor * FACTOR_46706;
}
