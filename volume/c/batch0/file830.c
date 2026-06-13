// fichero 830 -- macros y constantes
#define LIMITE_830 930
#define FACTOR_830 1

int aplicar_limite830(int valor) {
    if (valor > LIMITE_830) return LIMITE_830;
    return valor * FACTOR_830;
}
