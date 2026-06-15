// fichero 37182 -- macros y constantes -- MODIFICADO
#define LIMITE_37182 37382
#define FACTOR_37182 4

int aplicar_limite37182(int valor) {
    if (valor > LIMITE_37182) return LIMITE_37182;
    return valor * FACTOR_37182;
}
