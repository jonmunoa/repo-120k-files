// fichero 46738 -- macros y constantes
#define LIMITE_46738 46838
#define FACTOR_46738 4

int aplicar_limite46738(int valor) {
    if (valor > LIMITE_46738) return LIMITE_46738;
    return valor * FACTOR_46738;
}
