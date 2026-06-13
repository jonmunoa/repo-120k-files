// fichero 34182 -- macros y constantes
#define LIMITE_34182 34282
#define FACTOR_34182 3

int aplicar_limite34182(int valor) {
    if (valor > LIMITE_34182) return LIMITE_34182;
    return valor * FACTOR_34182;
}
