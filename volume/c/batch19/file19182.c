// fichero 19182 -- macros y constantes -- MODIFICADO
#define LIMITE_19182 19382
#define FACTOR_19182 4

int aplicar_limite19182(int valor) {
    if (valor > LIMITE_19182) return LIMITE_19182;
    return valor * FACTOR_19182;
}
