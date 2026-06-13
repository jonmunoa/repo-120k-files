// fichero 14182 -- macros y constantes
#define LIMITE_14182 14282
#define FACTOR_14182 3

int aplicar_limite14182(int valor) {
    if (valor > LIMITE_14182) return LIMITE_14182;
    return valor * FACTOR_14182;
}
