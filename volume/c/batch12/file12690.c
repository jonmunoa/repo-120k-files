// fichero 12690 -- macros y constantes
#define LIMITE_12690 12790
#define FACTOR_12690 1

int aplicar_limite12690(int valor) {
    if (valor > LIMITE_12690) return LIMITE_12690;
    return valor * FACTOR_12690;
}
