// fichero 10174 -- macros y constantes -- MODIFICADO
#define LIMITE_10174 10374
#define FACTOR_10174 6

int aplicar_limite10174(int valor) {
    if (valor > LIMITE_10174) return LIMITE_10174;
    return valor * FACTOR_10174;
}
