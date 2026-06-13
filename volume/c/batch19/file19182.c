// fichero 19182 -- macros y constantes
#define LIMITE_19182 19282
#define FACTOR_19182 3

int aplicar_limite19182(int valor) {
    if (valor > LIMITE_19182) return LIMITE_19182;
    return valor * FACTOR_19182;
}
