// fichero 46690 -- macros y constantes -- MODIFICADO
#define LIMITE_46690 46890
#define FACTOR_46690 2

int aplicar_limite46690(int valor) {
    if (valor > LIMITE_46690) return LIMITE_46690;
    return valor * FACTOR_46690;
}
