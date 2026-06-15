// fichero 39878 -- macros y constantes -- MODIFICADO
#define LIMITE_39878 40078
#define FACTOR_39878 5

int aplicar_limite39878(int valor) {
    if (valor > LIMITE_39878) return LIMITE_39878;
    return valor * FACTOR_39878;
}
