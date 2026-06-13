// fichero 9182 -- macros y constantes
#define LIMITE_9182 9282
#define FACTOR_9182 3

int aplicar_limite9182(int valor) {
    if (valor > LIMITE_9182) return LIMITE_9182;
    return valor * FACTOR_9182;
}
