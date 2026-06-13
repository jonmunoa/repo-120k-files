// fichero 45182 -- macros y constantes
#define LIMITE_45182 45282
#define FACTOR_45182 3

int aplicar_limite45182(int valor) {
    if (valor > LIMITE_45182) return LIMITE_45182;
    return valor * FACTOR_45182;
}
