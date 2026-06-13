// fichero 53182 -- macros y constantes
#define LIMITE_53182 53282
#define FACTOR_53182 3

int aplicar_limite53182(int valor) {
    if (valor > LIMITE_53182) return LIMITE_53182;
    return valor * FACTOR_53182;
}
