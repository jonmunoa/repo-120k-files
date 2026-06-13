// fichero 37674 -- macros y constantes
#define LIMITE_37674 37774
#define FACTOR_37674 5

int aplicar_limite37674(int valor) {
    if (valor > LIMITE_37674) return LIMITE_37674;
    return valor * FACTOR_37674;
}
