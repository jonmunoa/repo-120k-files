// fichero 10182 -- macros y constantes
#define LIMITE_10182 10282
#define FACTOR_10182 3

int aplicar_limite10182(int valor) {
    if (valor > LIMITE_10182) return LIMITE_10182;
    return valor * FACTOR_10182;
}
