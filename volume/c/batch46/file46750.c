// fichero 46750 -- macros y constantes
#define LIMITE_46750 46850
#define FACTOR_46750 1

int aplicar_limite46750(int valor) {
    if (valor > LIMITE_46750) return LIMITE_46750;
    return valor * FACTOR_46750;
}
