// fichero 24182 -- macros y constantes
#define LIMITE_24182 24282
#define FACTOR_24182 3

int aplicar_limite24182(int valor) {
    if (valor > LIMITE_24182) return LIMITE_24182;
    return valor * FACTOR_24182;
}
