// fichero 28830 -- macros y constantes
#define LIMITE_28830 28930
#define FACTOR_28830 1

int aplicar_limite28830(int valor) {
    if (valor > LIMITE_28830) return LIMITE_28830;
    return valor * FACTOR_28830;
}
