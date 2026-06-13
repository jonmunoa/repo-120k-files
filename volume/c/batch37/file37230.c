// fichero 37230 -- macros y constantes
#define LIMITE_37230 37330
#define FACTOR_37230 1

int aplicar_limite37230(int valor) {
    if (valor > LIMITE_37230) return LIMITE_37230;
    return valor * FACTOR_37230;
}
