// fichero 48674 -- macros y constantes
#define LIMITE_48674 48774
#define FACTOR_48674 5

int aplicar_limite48674(int valor) {
    if (valor > LIMITE_48674) return LIMITE_48674;
    return valor * FACTOR_48674;
}
