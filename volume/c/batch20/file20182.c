// fichero 20182 -- macros y constantes
#define LIMITE_20182 20282
#define FACTOR_20182 3

int aplicar_limite20182(int valor) {
    if (valor > LIMITE_20182) return LIMITE_20182;
    return valor * FACTOR_20182;
}
