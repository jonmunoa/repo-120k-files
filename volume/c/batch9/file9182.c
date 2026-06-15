// fichero 9182 -- macros y constantes -- MODIFICADO
#define LIMITE_9182 9382
#define FACTOR_9182 4

int aplicar_limite9182(int valor) {
    if (valor > LIMITE_9182) return LIMITE_9182;
    return valor * FACTOR_9182;
}
