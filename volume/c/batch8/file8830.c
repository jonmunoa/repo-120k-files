// fichero 8830 -- macros y constantes
#define LIMITE_8830 8930
#define FACTOR_8830 1

int aplicar_limite8830(int valor) {
    if (valor > LIMITE_8830) return LIMITE_8830;
    return valor * FACTOR_8830;
}
