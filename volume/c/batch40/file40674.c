// fichero 40674 -- macros y constantes
#define LIMITE_40674 40774
#define FACTOR_40674 5

int aplicar_limite40674(int valor) {
    if (valor > LIMITE_40674) return LIMITE_40674;
    return valor * FACTOR_40674;
}
