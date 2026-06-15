// fichero 10182 -- macros y constantes -- MODIFICADO
#define LIMITE_10182 10382
#define FACTOR_10182 4

int aplicar_limite10182(int valor) {
    if (valor > LIMITE_10182) return LIMITE_10182;
    return valor * FACTOR_10182;
}
