// fichero 17738 -- macros y constantes
#define LIMITE_17738 17838
#define FACTOR_17738 4

int aplicar_limite17738(int valor) {
    if (valor > LIMITE_17738) return LIMITE_17738;
    return valor * FACTOR_17738;
}
