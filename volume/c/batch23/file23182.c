// fichero 23182 -- macros y constantes
#define LIMITE_23182 23282
#define FACTOR_23182 3

int aplicar_limite23182(int valor) {
    if (valor > LIMITE_23182) return LIMITE_23182;
    return valor * FACTOR_23182;
}
