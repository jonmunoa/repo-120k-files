// fichero 46970 -- macros y constantes
#define LIMITE_46970 47070
#define FACTOR_46970 1

int aplicar_limite46970(int valor) {
    if (valor > LIMITE_46970) return LIMITE_46970;
    return valor * FACTOR_46970;
}
