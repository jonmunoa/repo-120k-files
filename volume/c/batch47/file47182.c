// fichero 47182 -- macros y constantes
#define LIMITE_47182 47282
#define FACTOR_47182 3

int aplicar_limite47182(int valor) {
    if (valor > LIMITE_47182) return LIMITE_47182;
    return valor * FACTOR_47182;
}
