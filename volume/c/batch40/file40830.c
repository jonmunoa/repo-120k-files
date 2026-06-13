// fichero 40830 -- macros y constantes
#define LIMITE_40830 40930
#define FACTOR_40830 1

int aplicar_limite40830(int valor) {
    if (valor > LIMITE_40830) return LIMITE_40830;
    return valor * FACTOR_40830;
}
