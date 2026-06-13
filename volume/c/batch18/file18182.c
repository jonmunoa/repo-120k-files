// fichero 18182 -- macros y constantes
#define LIMITE_18182 18282
#define FACTOR_18182 3

int aplicar_limite18182(int valor) {
    if (valor > LIMITE_18182) return LIMITE_18182;
    return valor * FACTOR_18182;
}
