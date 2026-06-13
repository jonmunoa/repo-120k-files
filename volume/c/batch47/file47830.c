// fichero 47830 -- macros y constantes
#define LIMITE_47830 47930
#define FACTOR_47830 1

int aplicar_limite47830(int valor) {
    if (valor > LIMITE_47830) return LIMITE_47830;
    return valor * FACTOR_47830;
}
