// fichero 49830 -- macros y constantes
#define LIMITE_49830 49930
#define FACTOR_49830 1

int aplicar_limite49830(int valor) {
    if (valor > LIMITE_49830) return LIMITE_49830;
    return valor * FACTOR_49830;
}
