// fichero 21182 -- macros y constantes
#define LIMITE_21182 21282
#define FACTOR_21182 3

int aplicar_limite21182(int valor) {
    if (valor > LIMITE_21182) return LIMITE_21182;
    return valor * FACTOR_21182;
}
