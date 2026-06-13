// fichero 48182 -- macros y constantes
#define LIMITE_48182 48282
#define FACTOR_48182 3

int aplicar_limite48182(int valor) {
    if (valor > LIMITE_48182) return LIMITE_48182;
    return valor * FACTOR_48182;
}
