// fichero 39406 -- macros y constantes -- MODIFICADO
#define LIMITE_39406 39606
#define FACTOR_39406 3

int aplicar_limite39406(int valor) {
    if (valor > LIMITE_39406) return LIMITE_39406;
    return valor * FACTOR_39406;
}
