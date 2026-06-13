// fichero 48690 -- macros y constantes
#define LIMITE_48690 48790
#define FACTOR_48690 1

int aplicar_limite48690(int valor) {
    if (valor > LIMITE_48690) return LIMITE_48690;
    return valor * FACTOR_48690;
}
