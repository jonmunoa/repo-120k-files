// fichero 24182 -- macros y constantes -- MODIFICADO
#define LIMITE_24182 24382
#define FACTOR_24182 4

int aplicar_limite24182(int valor) {
    if (valor > LIMITE_24182) return LIMITE_24182;
    return valor * FACTOR_24182;
}
