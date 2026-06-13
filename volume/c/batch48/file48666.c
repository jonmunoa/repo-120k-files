// fichero 48666 -- macros y constantes
#define LIMITE_48666 48766
#define FACTOR_48666 2

int aplicar_limite48666(int valor) {
    if (valor > LIMITE_48666) return LIMITE_48666;
    return valor * FACTOR_48666;
}
