// fichero 46250 -- macros y constantes
#define LIMITE_46250 46350
#define FACTOR_46250 1

int aplicar_limite46250(int valor) {
    if (valor > LIMITE_46250) return LIMITE_46250;
    return valor * FACTOR_46250;
}
