// fichero 50966 -- macros y constantes
#define LIMITE_50966 51066
#define FACTOR_50966 2

int aplicar_limite50966(int valor) {
    if (valor > LIMITE_50966) return LIMITE_50966;
    return valor * FACTOR_50966;
}
