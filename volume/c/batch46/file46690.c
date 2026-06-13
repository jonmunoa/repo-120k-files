// fichero 46690 -- macros y constantes
#define LIMITE_46690 46790
#define FACTOR_46690 1

int aplicar_limite46690(int valor) {
    if (valor > LIMITE_46690) return LIMITE_46690;
    return valor * FACTOR_46690;
}
