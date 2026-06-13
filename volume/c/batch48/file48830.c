// fichero 48830 -- macros y constantes
#define LIMITE_48830 48930
#define FACTOR_48830 1

int aplicar_limite48830(int valor) {
    if (valor > LIMITE_48830) return LIMITE_48830;
    return valor * FACTOR_48830;
}
