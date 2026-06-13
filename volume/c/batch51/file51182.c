// fichero 51182 -- macros y constantes
#define LIMITE_51182 51282
#define FACTOR_51182 3

int aplicar_limite51182(int valor) {
    if (valor > LIMITE_51182) return LIMITE_51182;
    return valor * FACTOR_51182;
}
